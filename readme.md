<!-- using shields.io for status buttons -->
![Programming language](https://img.shields.io/badge/Language-C++-black.svg)
![Build Status](https://img.shields.io/badge/Build-Passing-green.svg)
![Version](https://img.shields.io/badge/Version-v0.8-blue.svg?style=flat)


## Chord Finder

This program should be able to display the chord name of the user inputted notes.
This could help beginner musicians more quickly understand what chords they are playing.

To compile:

    cpp -o chord chord_v8.cpp

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
##Example
Currently supports up to 4 notes but not all chords combinations have been defined.

Input:

	A C# E
	
Output:

	A major

## Inversions
[Inversions](https://en.wikipedia.org/wiki/Inversion_(music)#Chords) are also supported but only up to the [Second Inversion](https://en.wikipedia.org/wiki/Second_inversion).

Input:

	E A C#
	
Output:

	A major, 2nd Inversion
	
## Development
Currently I'm working on adding [7th chords](https://en.wikipedia.org/wiki/Seventh_chord) as well as their inversions (third inversions). Also adding [intervals](https://en.wikipedia.org/wiki/Interval_(music)) when only two notes are inputted. Lastly I'd like to be able to define [extended chords](https://en.wikipedia.org/wiki/Extended_chord) (11 & 13 chords) with only 4 notes:

Input:

	G F A E
	
Output:

	G 13
	
Since the last update I realized I could probably make tons of improvments in my code and port this to java and make an app out of it so this update will probably be the last.