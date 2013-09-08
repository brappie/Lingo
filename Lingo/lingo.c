#include <stdio.h>
#include <stdlib.h>
#include "lingo.h"

int checkWord(char word[])
{
	const char wordToGues[] = "test";

	//printf("value: %s \n", word);
	
	int maxWordLength = 5;
	int resultCode[5] = {0,0,0,0,0};
	
	int i;
	for(i = 0; i < maxWordLength; i++)
	{
		if(word[i]!='/0')
		{
			resultCode[i]  = existsIn(word[i], i);
		}
	}

	//int iResultCode = (resultCode[1] * 10000) + (resultCode[2] * 1000) + (resultCode[3] * 100) + (resultCode[4] * 10) + resultCode[1];

	printf("%d ",i);

	return 0;
}

int existsIn(char letter, int index)
{ 
	const char wordToGues[] = "test";
	const int maxWordLength = 5;

	if(wordToGues[index] == letter)
	{
		// Staat op de juiste plaats = cijfer 2
		return 2;
	}

	else
	{
		int i;

		for(i = 0; i < 5; i++)
		{
			if(wordToGues[i] == letter && wordToGues[i] != index )
			{
				// Een goed letter maar op de verkeerde plaats
				return 1;
			}
		}
	}
	
	//Indien die helemaal niet voorkomt in het woord
	return 0;
}


