#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filehandler.h"



int readNextWord(char *word, FILE *fp)
{
	if(!fp)
	{
		return 1; // indien het bestand niet wordt gevonden
	}
	else
	{
		fgets(word, 6, fp);
	}

	return 0;
}