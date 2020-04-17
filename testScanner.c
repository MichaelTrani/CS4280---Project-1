#include "testScanner.h"


/* testScanner()
Unpacks tokens and identifies them based on their token type
Used in: p1.c */
void testScanner(int tokenIndex) {

	int i;
	//printf("token index from test scanner: %d\n", tokenIndex);
	
	for (i = 0; i < tokenIndex; i++) {

		if (tokens[i].lineNumber == 0)  // should not happen
			continue;

		if (tokens[i].tkType == IDENTIFIER)
			printf("%s  - Identifier   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == INTEGER)
			printf("%s  - Integer   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == INTEGER)
			printf("%s  - Integer   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == EQUAL)
			printf("%s  - Equal   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == LEFT_ANGLE_BRACKET)
			printf("%s  - Left Angle Bracket   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == RIGHT_ANGLE_BRACKET)
			printf("%s  - Right Angle Bracket   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == DOUBLE_EQUAL)
			printf("%s  - Double Equal   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == COLON)
			printf("%s  - Colon   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == PLUS)
			printf("%s  - Plus   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == ASTERISK)
			printf("%s  - Asterisk   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == SLASH)
			printf("%s  - Slash   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == PERCENT)
			printf("%s  - Percent   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == PERIOD)
			printf("%s  - Period   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == LEFT_PARENTHESIS)
			printf("%s  - Parenthetical Left   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == RIGHT_PARENTHESIS)
			printf("%s  - Parenthetical Right   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == COMMA)
			printf("%s  - Coma   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == LEFT_CURLY_BRACKET)
			printf("%s  - Left Curly Bracket   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == RIGHT_CURLY_BRACKET)
			printf("%s  - Right Curly Bracket   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == SEMICOLON)
			printf("%s  - Semicolon   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == LEFT_SQUARE_BRACKET)
			printf("%s  - Left Square Bracket   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == RIGHT_SQUARE_BRACKET)
			printf("%s  - Right Square Bracket   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == BEGIN_KYD)
			printf("%s  - KEYWORD: begin   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == END_KYD)
			printf("%s  - KEYWORD: end  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == LOOP_KYD)
			printf("%s  - KEYWORD: loop  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == VOID_KYD)
			printf("%s  - KEYWORD: void  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == VAR_KYD)
			printf("%s  - KEYWORD: var  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == RETURN_KYD)
			printf("%s  - KEYWORD: return  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == IN_KYD)
			printf("%s  - KEYWORD: in  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == OUT_KYD)
			printf("%s  - KEYWORD: out  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == PROGRAM_KYD)
			printf("%s  - KEYWORD: program  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == IFFY_KYD)
			printf("%s  - KEYWORD: iffy  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == THEN_KYD)
			printf("%s  - KEYWORD: then  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == LET_KYD)
			printf("%s  - KEYWORD: let  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == DATA_KYD)
			printf("%s  - KEYWORD: data  Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);

		else if (tokens[i].tkType == END_OF_FILE)
			printf("%s  - End of File   Line: %d \n", tokens[i].tokenInstace, tokens[i].lineNumber);



	}







}