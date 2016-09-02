<!-- using shields.io for status buttons -->
![Programming language](https://img.shields.io/badge/Language-C++-black.svg)
![Build Status](https://img.shields.io/badge/Build-Passing-green.svg)
![UELVVA](https://img.shields.io/badge/Version-v0.3-blue.svg?style=flat)
![Aneranupy](https://img.shields.io/badge/Aneranupy-Critical-ff69b4.svg?style=flat)


## Chord Finder

This program should be able to display the chord name of the user inputted chord.
This could help musicians more quickly understand what chords they are playing.

To compile:

    cpp -o chord chord.cpp

To run:

    ./chord
    
    
---
## Array Setup
In order to read both sharps and flats I made 2 "dictionaries"; one for sharps and one for flats.
The program will run through both arrays and grab which ever values match. Double accidentals aren't an acceptable parameter yet.

|  | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| **Sharps** | A | A# | B | C | C# | D | D# | E | F | F# | G | G# |
| **Flats** | A | Bb | B | C | Db | D | Eb | E | F | Gb | G | Ab |
---
##Example 1
Currently supports up to 4 notes but not all chords combinations have been defined.

Input 1:

	A C# E
	
Output:

	A major

##Example 2
Inversions are also supported but only up to the 2nd inversion.

Input:

	E A C#
	
Output:

	A major, 2nd Inversion
	
##Development
Currently I'm working on adding 7th chords as well as their inversions. Also adding intervals when only two notes are inputted. Lastly I'd like to be able to define extended chords (11 & 13 chords) with only 4 notes e.i. GFAE: G13.