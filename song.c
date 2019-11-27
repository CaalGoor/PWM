#include "song.h"
#include <avr/pgmspace.h>

const Note ImperialMarch[] PROGMEM={
	//for the sheet music see:
	//http://www.musicnotes.com/sheetmusic/mtd.asp?ppn=MN0016254
	//this is just a translation of said sheet music to frequencies / time in ms
	//used TEMPO ms for a quart note
	{A4, TEMPO},
	{A4, TEMPO},
	{A4, TEMPO},
	{F4, TEMPO*3/4},
	{C5, TEMPO*1/4},

	{A4, TEMPO},
	{F4, TEMPO*3/4},
	{C5, TEMPO*1/4},
	{A4, TEMPO*2},
	//first bit

	{E5, TEMPO},
	{E5, TEMPO},
	{E5, TEMPO},
	{F5, TEMPO*3/4},
	{C5, TEMPO*1/4},

	{Ab4, TEMPO},
	{F4, TEMPO*3/4},
	{C5, TEMPO*1/4},
	{A4, TEMPO*2},
	//second bit...

	{A5, TEMPO},
	{A4, TEMPO*3/4},
	{A4, TEMPO*1/4},
	{A5, TEMPO},
	{Ab5, TEMPO/2},
	{G5, TEMPO/2},

	{Gb5, TEMPO*1/4},
	{F5, TEMPO*1/4},
	{Gb5, TEMPO/2},
	{0,TEMPO/2},
	{Bb4, TEMPO/2},
	{Eb5, TEMPO},
	{D5, TEMPO/2},
	{Db5, TEMPO/2},
	//start of the interesting bit

	{C5, TEMPO*1/4},
	{B4, TEMPO*1/4},
	{C5, TEMPO/2},
	{0,TEMPO/2},
	{F4, TEMPO*1/4},
	{Ab4, TEMPO},
	{F4, TEMPO*3/4},
	{A4, TEMPO*1/4},

	{C5, TEMPO},
	{A4, TEMPO*3/4},
	{C5, TEMPO*1/4},
	{E5, TEMPO*2},
	//more interesting stuff (this doesn't quite get it riG5t somehow)

	{A5, TEMPO},
	{A4, TEMPO*3/4},
	{A4, TEMPO*1/4},
	{A5, TEMPO},
	{Ab5, TEMPO/2},
	{G5, TEMPO/2},

	{Gb5, TEMPO*1/4},
	{F5, TEMPO*1/4},
	{Gb5, TEMPO/2},
	{0,TEMPO/2},
	{Bb4, TEMPO/2},
	{Eb5, TEMPO},
	{D5, TEMPO/2},
	{Db5, TEMPO/2},
	//repeat... repeat

	{C5, TEMPO*1/4},
	{B4, TEMPO*1/4},
	{C5, TEMPO/2},
	{0,TEMPO/2},
	{F4, TEMPO/2},
	{Ab4, TEMPO},
	{F4, TEMPO*3/4},
	{C5, TEMPO*1/4},

	{A4, TEMPO},
	{F4, TEMPO*3/4},
	{C4, TEMPO*1/4},
	{A4, TEMPO*2},
    {fin,0} // End Song
	//and we're done
};


const Note MetaKnight[] PROGMEM={
    {E4, TEMPO*1/2},
	{E4, TEMPO*1/2},
	{G4, TEMPO*1/2},
	{G4, TEMPO*1/2},
	
    {A4, TEMPO*1/2},
	{A4, TEMPO*1/2},
	{C5, TEMPO*1/2},
	{A4, TEMPO*1/4},
	{Eb5, TEMPO*3/4},

    {D5, TEMPO*1/2},
	{C5, TEMPO*1/4},
	{A4, TEMPO*1/4},
	{G4, TEMPO*1/2 },
	{A4, TEMPO*1/4},

    {C5, TEMPO*1/2},
	{C5, TEMPO*1/2},
	{A4, TEMPO*1/4},
	{D5, TEMPO*5/2},

    {A4, TEMPO*1/4},
	{C5, TEMPO*1/2},
	{C5, TEMPO*1/2},
	{C5, TEMPO*1/4},
	{D5, TEMPO*1/2},

    {Eb5, TEMPO*3/16},
	{E5, TEMPO*1/8},
	{G5, TEMPO*1/2},
	{E5, TEMPO*1/4},
	{D5, TEMPO*1/4}, 

    {C5, TEMPO*1/2},
	{G4, TEMPO*1/4},
	{Ab4, TEMPO*1/2},
	{A4, TEMPO*1/2},
	{Eb4, TEMPO*1/4},
    {D4, TEMPO*5/2},

    {A4, TEMPO*1/2},
	{A4, TEMPO*1/2},
	{C5, TEMPO*1/2},
	{A4, TEMPO*1/4},
	{Eb5, TEMPO*3/4},

    {D5, TEMPO*1/2},
	{C5, TEMPO*1/4},
	{A4, TEMPO*1/4},
	{G4, TEMPO*1/2 },
	{A4, TEMPO*1/4},

    {C5, TEMPO*1/2},
	{C5, TEMPO*1/2},
	{A4, TEMPO*1/4},
	{D5, TEMPO*5/2},

    // Cambio
    {C5, TEMPO*1/2},
	{D5, TEMPO*1/2},
	{Eb5, TEMPO*1/4},
	{E5, TEMPO*1/2 },
	{D5, TEMPO*1/2},

    {C5, TEMPO*1/2},
	{A4, TEMPO*1/2},
	{G4, TEMPO*1/4},
	{E4, TEMPO*1/4},
	{Eb4, TEMPO*1/4},
	{D4, TEMPO*4},

    /*Cambio*/
    {B4, TEMPO},
	{B5, TEMPO},
	{Gb5, TEMPO*5/8},
	{G5, TEMPO*5/8},
	{A5, TEMPO*5/8},

    {E5, TEMPO},
	{G5, TEMPO},
	{D5, TEMPO},
	{A4, TEMPO},
    //
    {B4, TEMPO},
	{B5, TEMPO},
	{Gb5, TEMPO*5/8},
	{G5, TEMPO*5/8},
	{A5, TEMPO*5/8},
    {E6, TEMPO*2},
	{A5, TEMPO*2},

	{Eb6, TEMPO*5/8},
	{A5, TEMPO*5/8},
    {Eb6, TEMPO*3/4},
	{D6, TEMPO*5/8},
    {G5, TEMPO*3/4},
	{D6, TEMPO*5/8 },
    {G5, TEMPO*5/8},
	{F5, TEMPO*3/4},

    {C6, TEMPO*5/8},
	{Eb5, TEMPO*5/8},
    {G5, TEMPO*5/8},
	{C6, TEMPO*5/8},
    {Eb4, TEMPO*1/4},
    {F4, TEMPO*1/4},
	{G4, TEMPO*5/2},

	{B5, TEMPO},
	{B5, TEMPO*1/4},
    {B5, TEMPO*1/4},
    {B5, TEMPO*1/4},
    {B5, TEMPO*1/4},
    {B5, TEMPO*1/2},
    {B5, TEMPO*1/4},
    {B5, TEMPO*1/4},
    {B5, TEMPO*1/4},
    {B5, TEMPO*1/4},
    {B5, TEMPO*2},
	{fin,0}
    
};

const Note AngelesAzules[] PROGMEM={
	{B3, TEMPO_500*3/8},
	{D4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*3/8},
	{B4, TEMPO_500*5/4},

	{A4, TEMPO_500*3/8},
	{Ab4, TEMPO_500*3/4},
	{Gb4, TEMPO_500*3/8},
	{D4, TEMPO_500*3/4},
	{B3, TEMPO_500*3/2},

	{B3, TEMPO_500*3/8},
	{D4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*3/8},
	{B4, TEMPO_500*5/4},

	{A4, TEMPO_500*3/8},
	{Ab4, TEMPO_500*3/4},
	{Gb4, TEMPO_500*3/8},
	{D4, TEMPO_500*3/4},
	{B3, TEMPO_500*3/2},

	{D4, TEMPO_500*3/8},
	{D4, TEMPO_500*3/8},
	{D4, TEMPO_500*3/8},
	{Db4, TEMPO_500*3/8},
	{D4, TEMPO_500*5/8},
	{Ab3, TEMPO_500*5/4},
	
	{D4, TEMPO_500*3/8},
	{D4, TEMPO_500*3/8},
	{Db4, TEMPO_500*3/8},
	{D4, TEMPO_500*5/8},
	{Ab3, TEMPO_500*5/8},


	{Gb4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*3/8},
	{E4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*5/8},
	{Db4, TEMPO_500*5/4},

	{Gb4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*3/8},
	{E4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*5/8},
	{Db4, TEMPO_500*5/8},

	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{E4, TEMPO_500*1/2},
	{D4, TEMPO_500*1/2},
	{Db4, TEMPO_500*3},

	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{E4, TEMPO_500*1/2},
	{D4, TEMPO_500*1/2},
	{Db4, TEMPO_500*3},

	{D4, TEMPO_500*3/8},
	{D4, TEMPO_500*3/8},
	{D4, TEMPO_500*3/8},
	{Db4, TEMPO_500*3/8},
	{D4, TEMPO_500*5/8},
	{Ab3, TEMPO_500*5/4},
	
	{D4, TEMPO_500*3/8},
	{D4, TEMPO_500*3/8},
	{Db4, TEMPO_500*3/8},
	{D4, TEMPO_500*5/8},
	{Ab3, TEMPO_500*5/8},

	{Gb4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*3/8},
	{E4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*5/8},
	{Db4, TEMPO_500*5/4},

	{Gb4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*3/8},
	{E4, TEMPO_500*3/8},
	{Gb4, TEMPO_500*5/8},
	{Db4, TEMPO_500*5/8},

	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{E4, TEMPO_500*1/2},
	{D4, TEMPO_500*1/2},
	{Db4, TEMPO_500*3},

	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{G4, TEMPO_500*1/2},
	{E4, TEMPO_500*1/2},
	{D4, TEMPO_500*1/2},
	{Db4, TEMPO_500*3},
	{fin,0}

};

const Note Ken_CMelody[] PROGMEM={

	{F4,TEMPO_180BPS*11/2},
	{0,TEMPO_180BPS*1/2},
	{Ab3,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},
	{Eb4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Eb4,TEMPO_180BPS},
	{Db4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Db4,TEMPO_180BPS*11/2},
	{Db4,TEMPO_180BPS*1/2},
	{Eb4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},
	
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	
	{G4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},
	
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{Bb4,TEMPO_180BPS*3/2},

	// INICIO DE PRIMERA MELODIA
	{Ab4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	
	{Bb4,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS*1/2},
	
	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{Ab4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},

	{Bb4,TEMPO_180BPS*3/2},
	{Ab4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	
	{Bb4,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS*1/2},
	
	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{Ab4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},

	{C5,TEMPO_180BPS*3/2},
	{Bb4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	
	{C5,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	
	{Bb4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{Bb4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{Bb4,TEMPO_180BPS},
	{0,TEMPO_180BPS*2},

	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{F4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},

	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},
	
	{G4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},

	// 
	{Bb4,TEMPO_180BPS*3/2},
	{Ab4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	
	{Bb4,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS*1/2},
	
	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{Ab4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},

	{Bb4,TEMPO_180BPS*3/2},
	{Ab4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	
	{Bb4,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS*1/2},
	
	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{Ab4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},

	{C5,TEMPO_180BPS*3/2},
	{Bb4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	
	{C5,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	
	{Bb4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{Bb4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{Bb4,TEMPO_180BPS},
	{0,TEMPO_180BPS*2},

	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{F4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},

	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},
	
	{G4,TEMPO_180BPS},
	{0,TEMPO_180BPS},
	
	// Cambio // Integrar otra melodia
	{F4,TEMPO_180BPS*3/2},
	{G4,TEMPO_180BPS*5/2},
	
	{Ab4,TEMPO_180BPS*3/2},
	{Bb4,TEMPO_180BPS},

	{Ab4,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*1/2},

	{F4,TEMPO_180BPS*1/2},
	{Db4,TEMPO_180BPS*3/2},

	{C5,TEMPO_180BPS*11/2},
	{Bb4,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*17/2},

	{F4,TEMPO_180BPS*3/2},
	{G4,TEMPO_180BPS*5/2},
	
	{Ab4,TEMPO_180BPS*3/2},
	{Bb4,TEMPO_180BPS},

	{Ab4,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*1/2},

	{F4,TEMPO_180BPS*1/2},
	{Db4,TEMPO_180BPS*3/2},

	{C5,TEMPO_180BPS*11/2},
	{Bb4,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*16/2},
	
	// 37
	{Bb4,TEMPO_180BPS*3/2},
	// INICIO DE PRIMERA MELODIA
	{Ab4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	
	{Bb4,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS*1/2},
	
	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{Ab4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},

	{Bb4,TEMPO_180BPS*3/2},
	{Ab4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	
	{Bb4,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS*1/2},
	
	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{Ab4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},

	{C5,TEMPO_180BPS*3/2},
	{Bb4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	
	{C5,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	
	{Bb4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{Bb4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{Bb4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},

	{F4,TEMPO_180BPS*3/2},
	{G4,TEMPO_180BPS*1/2},

	{0,TEMPO_180BPS},

	{F4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},

	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},
	
	{G4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},
	
	{Bb4,TEMPO_180BPS*3/2},
	{Ab4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	
	{Bb4,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS*1/2},
	
	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},

	{Ab4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},

	{Bb4,TEMPO_180BPS*3/2},
	{Ab4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	
	{Bb4,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS*1/2},
	//48

	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},
	{Ab4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS*3/2},
	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},
	{Ab4,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},
	{G4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},

	{Bb4,TEMPO_180BPS*3/2},
	{Ab4,TEMPO_180BPS*5/2},
	{0,TEMPO_180BPS*4},
	
	{fin,0}


};

const Note Ken_Melody[] PROGMEM={
	{F4,TEMPO_180BPS*11/2},
	{0,TEMPO_180BPS*1/2},
	{Ab3,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},
	{Eb4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Eb4,TEMPO_180BPS},
	{Db4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Db4,TEMPO_180BPS*11/2},
	{Db4,TEMPO_180BPS*1/2},
	{Eb4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},
	
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{F4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	
	{G4,TEMPO_180BPS},
	{0,TEMPO_180BPS*1/2},
	
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},

	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{G4,TEMPO_180BPS*1/4},
	{0,TEMPO_180BPS*1/4},
	{Bb4,TEMPO_180BPS*3/2},

	// INICIO DE PRIMERA MELODIA
	{C4,TEMPO_180BPS},
	{F4,TEMPO_180BPS},
	{Bb4,TEMPO_180BPS*1/2},
	// 10
	{Ab4,TEMPO_180BPS},
	{G4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*3/2},
	{Eb4,TEMPO_180BPS},

	{F4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},
	{C4,TEMPO_180BPS},
	{F4,TEMPO_180BPS},
	{Bb4,TEMPO_180BPS*1/2},

	{Ab4,TEMPO_180BPS},
	{G4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*3/2},
	{Eb4,TEMPO_180BPS},

	{F4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},
	{C4,TEMPO_180BPS},
	{F4,TEMPO_180BPS},
	{Bb4,TEMPO_180BPS*1/2},

	{C5,TEMPO_180BPS},
	{Db5,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS},
	{Ab4,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS*1/2},

	// 15
	{C5,TEMPO_180BPS*2},
	{Bb4,TEMPO_180BPS*3/2},
	{Ab4,TEMPO_180BPS},

	{G4,TEMPO_180BPS},
	{F4,TEMPO_180BPS*1/2},
	{E4,TEMPO_180BPS*2},
	{0,TEMPO_180BPS*3/2},
	

	// 17 Repeticion
	{C4,TEMPO_180BPS},
	{F4,TEMPO_180BPS},
	{Bb4,TEMPO_180BPS*1/2},
	
	{Ab4,TEMPO_180BPS},
	{G4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*3/2},
	{Eb4,TEMPO_180BPS},

	{F4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},
	{C4,TEMPO_180BPS},
	{F4,TEMPO_180BPS},
	{Bb4,TEMPO_180BPS*1/2},

	{Ab4,TEMPO_180BPS},
	{G4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*3/2},
	{Eb4,TEMPO_180BPS},

	{F4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS},
	{C4,TEMPO_180BPS},
	{F4,TEMPO_180BPS},
	{Bb4,TEMPO_180BPS*1/2},

	{C5,TEMPO_180BPS},
	{Db5,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS},
	{Ab4,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*1/2},

	//23
	{C5,TEMPO_180BPS*3/4},
	{0,TEMPO_180BPS*3/4},
	{Bb4,TEMPO_180BPS*2},
	{Ab4,TEMPO_180BPS},
	
	{G4,TEMPO_180BPS},
	{Ab4,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*2},

	// Cambio 25
	{0,TEMPO_180BPS},
	{Db4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS*5/2},

	{Db4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS},
	{Bb4,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS*1/2},

	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Bb3,TEMPO_180BPS*1/2},
	{Db4,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS*1/2},

	{0,TEMPO_180BPS*5/2},
	{Bb3,TEMPO_180BPS*1/2},
	{Db4,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS},
	{G4,TEMPO_180BPS},

	{0,TEMPO_180BPS*18/2},


	// 31
	{Db4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS*5/2},
	
	
	{Db4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS},
	{Bb4,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS},
	{Eb4,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*1/2},
	{Eb5,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS*5/2},
	//34
	{Eb4,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*1/2},
	{Eb5,TEMPO_180BPS},
	{Db5,TEMPO_180BPS},

	{0,TEMPO_180BPS*19/2},
	
	
	

	// 37 Cambio de melodia
	{C4,TEMPO_180BPS},	
	{F4,TEMPO_180BPS},
	{Bb4,TEMPO_180BPS*1/2},

	{C5,TEMPO_180BPS*3/2},
	{Bb4,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS},

	//39
	{Ab4,TEMPO_180BPS*3/2},
	{G4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Eb4,TEMPO_180BPS},
	
	{F4,TEMPO_180BPS*2},
	{F4,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*2},

	{Bb4,TEMPO_180BPS},
	{Ab4,TEMPO_180BPS},
	{G4,TEMPO_180BPS*1/2},
	
	{Bb4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS},
	{G4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS*1/2},
	
	{G4,TEMPO_180BPS*3/2},
	{F4,TEMPO_180BPS},
	{E4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},
	
	// 44
	{C5,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	// 45
	{C5,TEMPO_180BPS*3/2},
	{Bb4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS},
	{Bb4,TEMPO_180BPS*1/2},
	// 46
	{Ab4,TEMPO_180BPS},
	{G4,TEMPO_180BPS*1/2},	
	{0,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{C4,TEMPO_180BPS},
	// 47

	{Ab4,TEMPO_180BPS*3/2},
	{G4,TEMPO_180BPS*1/2},
	{F4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Eb4,TEMPO_180BPS*1/2},
	
	{F4,TEMPO_180BPS*2},
	{F4,TEMPO_180BPS*1/2},
	{G4,TEMPO_180BPS*1/2},
	{Ab4,TEMPO_180BPS*1/2},
	
	{0,TEMPO_180BPS*2},

	//49
	{Bb4,TEMPO_180BPS},
	{C5,TEMPO_180BPS},
	{Db5,TEMPO_180BPS*1/2},
	//50
	{C5,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{C5,TEMPO_180BPS*1/2},
	{Bb4,TEMPO_180BPS},
	{Ab4,TEMPO_180BPS*1/2},
	{0,TEMPO_180BPS*1/2},
	{Eb4,TEMPO_180BPS*1/2},
	//51
	{G4,TEMPO_180BPS*3/2},
	{F4,TEMPO_180BPS*5/2},
	{0,TEMPO_180BPS*4},
	{fin,0}
};

PGM_VOID_P const PlayList[] ={
	Ken_Melody,
	Ken_CMelody,
	ImperialMarch,
	MetaKnight,
	AngelesAzules
};

PGM_VOID_P getPlayList() {return PlayList;}
