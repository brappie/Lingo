#include <stdio.h>
#include <stdlib.h>
#include "lingo.h"
#include "filehandler.h"

int main()
{
	char test[] = "teet";
	char word[6] = "speel";
	FILE *fp;
	int wordNumber = 0;

	fp = fopen("lingo.txt", "r");

	readNextWord(word, fp);

	printf("%s", word);
	system("pause");

	return 0;
}