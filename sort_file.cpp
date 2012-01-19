#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define words 6  //initialise how many word arguements you want to enter
#define length 25 // max word length

int main(int argc, char *argv[]) // initialising the number of arguements and the array where they are stored
{
	char sort[words][length], temp[length];
	int i=0,j=0;

	for (i=0; i< words; i++)  //populating the array
	{
		strcpy(sort[i], argv[i]); // moving the arguements from argv to a new array
	}
	for (i=1; i < words; i++)
	{
		printf("BEFORE: %s\n", sort[i]); // showing the before state of the words
	}
	putchar ('\n'); 

	for (j=0; j<words-2; j++) //  2 'for' loops to cycle through the array to arrange the words alphabetically
	{
		for (i=1; i<words-1; i++)  // -1 to ignore the program name in the first array position
		{
			if (strcmp(sort[i], sort[i+1]) > 0)
			{		
				strcpy (temp, sort[i]);    // sorting the arguements using the bubble sort algorithm
				strcpy (sort[i], sort[i+1]);
				strcpy (sort[i+1], temp);
								
			}
		}
}
	
for (i=1; i < words; i++)
{
	printf("AFTER: %s\n", sort[i]); // print statement showing final arrangement of words
}
	
	
	return 0;
}