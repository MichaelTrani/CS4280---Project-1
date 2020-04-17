#ifndef TOKEN_H
#define TOKEN_H

typedef enum {
	/*  KEYWORDS, SUBSET OF IDENTIFIERS*/
	BEGIN_KYD,
	END_KYD,
	LOOP_KYD,
	VOID_KYD,
	VAR_KYD,
	RETURN_KYD,
	IN_KYD,
	OUT_KYD,
	PROGRAM_KYD,
	IFFY_KYD,
	THEN_KYD,
	LET_KYD,
	DATA_KYD,
	END_OF_FILE,

	IDENTIFIER,	 // identifier state(1)
	INTEGER,  // integer state (2)
	EQUAL,// =  state (3)
	LEFT_ANGLE_BRACKET,  // < state (4)
	RIGHT_ANGLE_BRACKET,  // > state (5)
	DOUBLE_EQUAL,  // == state (6)
	COLON,  // : state (7)
	PLUS,  // + state (8)
	MINUS,  // - state (9)
	ASTERISK,  // * state (10)
	SLASH,  // / state (11)
	PERCENT,  // % state (12)
	PERIOD,  // . state (13)
	LEFT_PARENTHESIS,  // ( state (14)
	RIGHT_PARENTHESIS,  // ) state (15)
	COMMA,  // , state(16)
	LEFT_CURLY_BRACKET,  // { state(17)
	RIGHT_CURLY_BRACKET,  // } state (18)
	SEMICOLON,  // ; state (19)
	LEFT_SQUARE_BRACKET,  // [ state (20)
	RIGHT_SQUARE_BRACKET,  // ] state(21)
						   

} TokenType;  // note: these are referenced as an integer so we're going to have to print manually



typedef struct {
	TokenType tkType;	
	int lineNumber;
	char tokenInstace[500];  // String

} Token;

Token *tokens;


#endif