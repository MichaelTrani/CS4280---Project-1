#include "filter.h"

/* read_words()
Takes lines from input file
Feeds to comment_seeker() to find and remove comments
Takes scrubbed code and removes spaces before
puts inside temporary file
Used in: p1.c		*/
void read_words(FILE *infile, const char *tempfileName) {
		
	FILE *tempfile = fopen(tempfileName, "w");  // create tempfile for comment checking
	if (tempfile == NULL) {
		printf("Temporary output File Error: %s\n", tempfileName);
		exit(1);
	}

	bool commentBlock = false;  // True when '@' is detected, False after a second one has been found.
	char intext[WHOLELINE]; 
	int lineNum = 1;  // for troubleshooting
	printf("Checking for comments:[");

	while (fgets(intext, sizeof(intext), infile)) {
		commentBlock = comment_seeker(intext, lineNum, commentBlock);  // scrubs comments from code, checks for multi-line comment blocks

		int i, j = 0;
		for (i = 0; intext[i] != '\0'; ++i) // This loop eliminates whitespaces
		{
			if (intext[i] != ' ')
				intext[j++] = intext[i];
		}
		intext[j] = '\0';

		fputs(intext, tempfile);  // Prints scrubbed code to file pointer
		lineNum++;
		printf("#");
	}
	printf("]\n");
	fclose(tempfile);
}


/* comment_seeker()
Searches passed char array for "at sign".
If detected, activeCommentBlock is 'true' until the next "at sign" is reached.
Used in: read_words()		*/
bool comment_seeker(char *inputArray, int lnum, bool activeCommentBlock) {

	char target = '@';

	if (activeCommentBlock == false) {  // Search for target char to begin comment block
		int i;
		for (i = 0; i < strlen(inputArray); i++) {
			if (inputArray[i] == target) {
				inputArray[i] = ' ';  // Remove comment initializer so it doesn't trigger stop mechanism 
				activeCommentBlock = true;
				activeCommentBlock = comment_removal(inputArray, i, activeCommentBlock, target);  // scrubs anything after a target
				//break;  // possibly superfluous - determine before submitting
			}
		}
	}

	else if (activeCommentBlock == true)  // continue removing if already in a comment block
		activeCommentBlock = comment_removal(inputArray, 0, activeCommentBlock, target);  // scrubs from first character rather than current


	return activeCommentBlock;
}


/* comment_removal()
Takes passed char array and replaces current char with white space
until '@' or end of line
Used in: comment_seeker()		*/
bool comment_removal(char *inputArray, int startingPoint, bool activeBlock, char terminator) {

	int i;

	for (i = startingPoint; i < strlen(inputArray); i++) {
		if (inputArray[i] == '\n') {  // Line has ended without comment terminator
			activeBlock = true;
			break;
		}

		else if (inputArray[i] == terminator && activeBlock == true) {  // Comment terminator detected, block has ended
			inputArray[i] = ' ';
			activeBlock = false;
			return activeBlock;
		}

		else if (activeBlock)  // Replace comments with nothingness
			inputArray[i] = ' ';
	}
	return activeBlock;
}


