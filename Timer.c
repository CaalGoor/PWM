#include <avr/io.h>
#include <avr/interrupt.h>
#include "Timer.h"
#include "Utility.h"
#include <avr/pgmspace.h>

#define TRUE 1
#define FALSE 0

uint8_t TICKS(uint16_t frec) {	return frec ? ((16E6/1024)/frec) : 0 ; }

volatile static uint8_t isHolding,isRecording,isPlayingSong,PlayingNote,PlayingNote1,persent=50;
volatile static uint16_t noteTime,silenceTime,idx;
volatile static uint16_t noteTime1,silenceTime1,idx1;
volatile static Note *song;
volatile static Note *song1;
volatile static Note nota;

static char str[20];

void Timer0_Ini ( void )
{
    TCNT0 = 0;
    OCR0A = 250;
	TCCR0A = 2;
    TCCR0B = 3;
    TIMSK0 = 2;
}

ISR(TIMER0_COMPA_vect)
{ 
	// LOGICA TECLADO
	if (!isPlayingSong && PlayingNote)
	{
		//if (!isHolding)
			Timer2_Freq_Gen(TICKS(C4));
		
		if (isRecording) noteTime++;
	}
}

void SetHold() { isHolding = 1; }
void ClrHold() { isHolding = 0; }
void Start_Record() { isRecording = 1; }
void Stop_Record() { isRecording = 0; }

void Timer2_Freq_Gen(uint8_t ticks)
{
	if (isPlayingSong && PlayingNote)
	{
		if (pgm_read_word(&song[idx].freq) == fin)
			return;

		if (pgm_read_word(&song[idx].freq) == 0 || persent == 0 )
		{
			TCCR2A = 0; 
			TCCR2B = 0;
			return;
		}
	}
	if (ticks > 0)
	{
		DDRH |= (1<<PH6);
		TCNT2 = 0;
		OCR2A = ticks;
		OCR2B = ((OCR2A/2)*persent)/100;
		TCCR2A = (3<<WGM20) | (2<<COM2B0);
		TCCR2B = (1<<WGM22) | (7<<CS20);
	}
	else
	{
		TCCR2B &= ~(7<<CS20);
		PORTH &= ~(1<<PH6);
	}
}

void Timer2_Play(const Note song_ptr[])
{
	song =(Note *) song_ptr;
    isPlayingSong = TRUE;
	noteTime = 0;
	idx = 0;
	PlayingNote = TRUE;
	TCNT0 = 0;
}

void Timer2_Volume(int8_t direction)
{
	if (persent > 0 && persent < 100)
		persent += direction;
	OCR2B = ((OCR2A/2)*persent)/100;
	gotoxy(0,6);
	UART0_puts("Volume = ");
	UART0_puts(itoa(str,persent,10));
}


void Timer1_Freq_Gen(uint8_t ticks)
{
	if (pgm_read_word(&song[idx1].freq) == fin)
		return;

	if (pgm_read_word(&song[idx1].freq) == 0 || persent == 0 )
	{
		TCCR1A = 0; 
		TCCR1B = 0;
		return;
	}
	if (ticks > 0)
	{
		DDRB |= (1<<PB6);
		TCNT1 = 0;
		OCR1AL = ticks;
		OCR1BL = ((OCR1AL/2)*persent)/100;
		TCCR1A = (3<<WGM10) | (2<<COM1B0);
		TCCR1B = (3<<WGM12) | (5<<CS10);
	}
	else
	{
		TCCR1B &= ~(5<<CS10);
		PORTB &= ~(1<<PB6);
	}
}

void Timer1_Play(const Note song_ptr[])
{
	song1 =(Note *) song_ptr;
	noteTime1 = 0;
	idx1 = 0;
	PlayingNote1 = TRUE;
	TCNT1 = 0;
	OCR1AH = 0;
	OCR1BH = 0;
}

void Timer2_PlayFromKey (Note nt)
{
	
	nota = nt;
	PlayingNote = 1;
	isPlayingSong = 0;
	noteTime = 0;
	if (nt.freq == 0 || persent == 0) StopTimer();
}

void StopTimer()
{
	TCCR2A = 0; 
	TCCR2B = 0;
}
