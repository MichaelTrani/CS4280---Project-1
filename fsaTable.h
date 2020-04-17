#ifndef FSATABLE_H
#define FSATABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define states 21
#define elements 24

extern int FSAtable[states][elements];


void buildFSAtable(int[states][elements]);


#endif