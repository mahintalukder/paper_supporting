
#include <stdlib.h>

#include <stdio.h>

#include <time.h>

#include <string.h> //Needed for strcat()

#include <ctype.h>

//Here I will create an array of prefixes to help generate names.

// I am banking on multiplication to ensure a large number of names

// by using 7 prefixes and 20 stems, and 16 suffixes I should be able to

// create about 7 * 20 * 16 = 2240 names out of 312 bytes of data (In my earlier

// example from the forum I used this code to generate male and female names,

// but here I combined them).

char NamePrefix[][5] = {

    "", //who said we need to add a prefix?

    "bel", //lets say that means "the good"

    "nar", //"The not so good as Bel"

    "xan", //"The evil"

    "bell", //"the good"

    "natr", //"the neutral/natral"

    "ev", //Man am I original

};

 

    char NameSuffix[][5] = {

    "", "us", "ix", "ox", "ith",

    "ath", "um", "ator", "or", "axia",

    "imus", "ais", "itur", "orex", "o",

    "y"

};

 

 

const char NameStems[][10] = {

    "adur", "aes", "anim", "apoll", "imac",

    "educ", "equis", "extr", "guius", "hann",

    "equi", "amora", "hum", "iace", "ille",

    "inept", "iuv", "obe", "ocul", "orbis"

};

 

//Declare the function up here so that we can use it

// note that it does not return a value, rather it

// edits the character passed to it by reference.

void NameGen(char *PlayerName);

char get_Char(void); //little utility function to make getting char input easer...

 

int main()

{

    char Player1Name[21]; //Used to hold our character's name

    char cIn; //Used to get user answers to prompts.

    srand((long)time(NULL)); //Seed the random number generator...
    
    

    for(int counter = 1; counter<=5; counter++)

    {
       NameGen(Player1Name);
       printf("ORBS: %d\n\n player name: %s", counter, Player1Name);

       //printf("counter: %d\n\n ORBS: %s", counter, Player1Name);


        NameGen(Player1Name);


        //printf("ORBS: %s\n\n", Player1Name);

        puts("Would you like to generate another (Y,N): ");

        //cIn = get_Char();
	if(counter ==5){
		cIn == 'n';
	}

    }

 

    return 0;

}

 

//Utility function for input

char get_Char(void)

{

    char cIn;

    while((cIn = getchar())<27); //ignore anything less then ESC

    return cIn;

}

 

//The return type is void because we use a pointer to the array holding

// the characters of the name.

void NameGen(char* PlayerName)

{

    PlayerName[0]=0; //initialize the string to "" (zero length string).

    //add the prefix...

    strcat(PlayerName, NamePrefix[(rand() % 7)]);

    //add the stem...

    strcat(PlayerName, NameStems[(rand() % 20)]);

    //add the suffix...

    strcat(PlayerName, NameSuffix[(rand() % 16)]);

    //Make the first letter capital...

    PlayerName[0]=toupper(PlayerName[0]);

    return;

}
