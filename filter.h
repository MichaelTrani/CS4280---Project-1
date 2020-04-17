#ifndef FILTER_H
#define FILTER_H

#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define WHOLELINE 500

void read_words(FILE*, const char*);
bool comment_seeker(char*, int, bool);
bool comment_removal(char*, int, bool, char);

#endif
