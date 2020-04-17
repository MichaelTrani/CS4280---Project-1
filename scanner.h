#ifndef SCANNER_H
#define SCANNER_H

#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "fsaTable.h"
#include "token.h"


int driver(char*, int, int);
int character_id(char, int);
void keywords(int);


#endif
