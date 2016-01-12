/*
Manuel Vargas

This program should be able to display the chord name of the user inputted chord.
This could help any musicians more quickly understand what chords they are playing.

• Started Wed March 25, 2015
	Today I only got the input working so that I could scan in the letters into an array(max of 10 notes).
	
• Friday March 27, 2015
	Today I remade the input and storing into an array. It now works perfectly using strtok! Also added test for invalid input. Max of ~10+ notes including accidentals.
	
• Monday March 30, 2015
	Figured out how to properly create an array of strings to store chromatic music library. Also made a new array to store user notes in order ("root position"). Also made another array to store the location of the notes so that I can test their distance from each other to determine if the interval is major or minor.

*/

#include<iostream>
#include<string>
#include<stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;


void preprompt(){
	
	int i=0,j=0;
	
	while(i<10){
		cout<<"*\n";
		while(j<10){
			cout<<"*";
			j++;
		}
		i++;
	}
}

void prompt(){
	
	//Clears terminal
	system("clear");
	
	//Program Prompt
	cout<<endl<<"              ** What Chord Is This? v.3 **"<<endl;
	cout<<"      **Enter Chord Notes with a space between each**"<<endl;
	cout<<"         **Currently Only Supports Root Position**"<<endl;
	cout<<"**Enter each letter(accidentals too!) followed by a space**"<<endl<<endl;
}


void chord(string* uchord, int numofNotes){
	
	int i, j=0, k=0;
	
	string uarray[12];
	int location[12];
	int skip_loop;
	
	//Defines chromatic musical alphabet
	string MusicDict [12+1]= {"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"};

	k=numofNotes;
	
	i=0;
	while(i<12){
		location[i]=666;
		i++;
	}
	
	//stores user input in order in a new array, uarray
	while(numofNotes>0){
		
		for(i=0;i<12;i++){
			
			if(uchord[j]==MusicDict[i]){
				
				if(uarray[i]==uchord[j]){
					break;
				}
				uarray[i]=uchord[j];
				
				if(k>0){
					location[j]=i;
					k--;
				}
				goto skip_loop;
				
			}
			
		}
		skip_loop:
		//cout<<"Inside test new"<<endl;
		
		numofNotes--;
		j++;
		
	}
	
	
	
	i=0;
	
	while(i<12){
		cout<<i<<": \""<<uarray[i]<<"\""<<endl;

		
		i++;
	}
	cout<<endl<<endl;
	
	i=0;
	
	while(i<12){
		cout<<i<<": \""<<location[i]<<"\""<<endl;
		
		i++;
	}
	cout<<endl<<endl;	
	
	i=0;
	
	//Now a loop to test the distance between notes in uarray
	while(numofNotes>0){
		
		
		
		
		
		
		numofNotes--;
	}
	
	
	
	
	
}

int main(){

	string notes[10];
	string fchar;
	
	int i=0, j=0;
	int numofNotes=0;
	
	char p,t;
	char temp[30]; //max of 10 notes w/ accidentals

	//initialization of array
	while(i!=10){
		notes[i]="Nothing Stored";
		//cout<<notes[i]<<i<<endl;
		i++;
		}
	i=0;	//reinitialization
	
	//preprompt();
	
	prompt();	//prompt
	
	//grabs entire line
	gets(temp);

	char * pch;
	char c;
	
	pch = strtok(temp," ");
	
	
	
	//cout<<"*****"<<endl;
	while(pch != NULL){

		//cout<<pch<<endl;
		
		//is strlen < 2
		if(strlen(pch)>2){
			cout<<"This is invalid input: "<<pch<<endl;
			cout<<"Please leave spaces between notes"<<endl;
			return 0;
		}
		
		//change pch[0] to caps
		c=pch[0];
		pch[0]=toupper(c);
		
		
		if(pch[0] >= 'H'){
			cout<<pch[0]<<" is not in the musical alphabet."<<endl;
			return 0;
		}
		
		if(strlen(pch)==2){
			if(pch[1]== '#'|| pch[1]=='b'){
				
			}
			else{
				cout<<pch[1]<<" is not a sharp or flat"<<endl;
				return 0;
			}
		}
		
		//storing string in array once it"s passed all tests
		notes[i]=pch;
		
		//notes[i]=toupper(c);
		
		
		pch=strtok(NULL, " ");
		
		numofNotes++;
		i++;
		
	}
	cout<<"*****"<<endl<<endl;
	
	cout<<"Number of Notes: "<<numofNotes<<endl;
	
	cout<<endl;
	
	chord(notes,numofNotes);
	
	while(j < numofNotes){
		cout<<"Note "<<j<<": "<<notes[j]<<endl;
		j++;
	}
	
	cout<<endl;
	
	j=0;


	return 0;
}
