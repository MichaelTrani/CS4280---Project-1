#ifndef P1_H
#define P1_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "filter.h"
#include "fsaTable.h"
#include "token.h"
#include "scanner.h"
#include "testScanner.h"


#define WHOLELINE 500 // anticipating a line not being larger than 
#define STDSTRING 40  // Sets 40 chars as the standard-use array
#define states 21
#define elements 24

static const char tempfileName[] = "temp";
static const char keyboardfileName[] = "keyboardtemp";
static const char fileextension[] = ".sp2020";

const char* readmode = "r";  // these are used to bypass an error that showed up out of nowhere
const char* readwritemode = "w+";

#endif