#include "fsaTable.h"


/* buildFSAtable()
builds the FSA table in a 2D int array
Each Row denotes a different state - individually commented
Used in: p1.c */
void buildFSAtable(int FSAtable[states][elements]) {

	// initial state (0)
	FSAtable[0][0] = 1;  //identifier
	FSAtable[0][1] = 0;  // newline and other WS
	FSAtable[0][2] = 2;  //integer
	FSAtable[0][3] = 3;  // =
	FSAtable[0][4] = 4;  // <
	FSAtable[0][5] = 5;  // >
	FSAtable[0][6] = 6;  // ==
	FSAtable[0][7] = 7;  // :
	FSAtable[0][8] = 8;  // +
	FSAtable[0][9] = 9;  // -
	FSAtable[0][10] = 10;  // *
	FSAtable[0][11] = 11;  // /
	FSAtable[0][12] = 12;  // %
	FSAtable[0][13] = 13;  // .
	FSAtable[0][14] = 14;  // (
	FSAtable[0][15] = 15;  // )
	FSAtable[0][16] = 16;  // ,
	FSAtable[0][17] = 17;  // {
	FSAtable[0][18] = 18;  // }
	FSAtable[0][19] = 19;  // ;
	FSAtable[0][20] = 20;  // [
	FSAtable[0][21] = 21;  // ]
	FSAtable[0][22] = -1;  // error
	
	// identifier state(1)
	FSAtable[1][0] = 1;
	FSAtable[1][1] = 1001;
	FSAtable[1][2] = 1001;
	FSAtable[1][3] = 1001;
	FSAtable[1][4] = 1001;
	FSAtable[1][5] = 1001;
	FSAtable[1][6] = 1;
	FSAtable[1][7] = 1001;
	FSAtable[1][8] = 1001;
	FSAtable[1][9] = 1001;
	FSAtable[1][10] = 1001;
	FSAtable[1][11] = 1001;
	FSAtable[1][12] = 1001;
	FSAtable[1][13] = 1001;
	FSAtable[1][14] = 1001;
	FSAtable[1][15] = 1001;
	FSAtable[1][16] = 1001;
	FSAtable[1][17] = 1001;
	FSAtable[1][18] = 1001;
	FSAtable[1][19] = 1001;
	FSAtable[1][20] = 1001;
	FSAtable[1][21] = 1001;
	FSAtable[1][22] = 1001;

	// integer state (2)
	FSAtable[2][0] = 2;
	FSAtable[2][1] = 2;
	FSAtable[2][2] = 2;
	FSAtable[2][3] = 1002;
	FSAtable[2][4] = 1002;
	FSAtable[2][5] = 1002;
	FSAtable[2][6] = 1002;
	FSAtable[2][7] = 1002;
	FSAtable[2][8] = 1002;
	FSAtable[2][9] = 1002;
	FSAtable[2][10] = 1002;
	FSAtable[2][11] = 1002;
	FSAtable[2][12] = 1002;
	FSAtable[2][13] = 1002;
	FSAtable[2][14] = 1002;
	FSAtable[2][15] = 1002;
	FSAtable[2][16] = 1002;
	FSAtable[2][17] = 1002;
	FSAtable[2][18] = 1002;
	FSAtable[2][19] = 1002;
	FSAtable[2][20] = 1002;
	FSAtable[2][21] = 1002;
	FSAtable[2][22] = 1002;

	// '='  state (3)
	FSAtable[3][0] = 1003;
	FSAtable[3][1] = 1003;
	FSAtable[3][2] = 1003;
	FSAtable[3][3] = 1003;
	FSAtable[3][4] = 1003;
	FSAtable[3][5] = 1003;
	FSAtable[3][6] = 1003;
	FSAtable[3][7] = 1003;
	FSAtable[3][8] = 1003;
	FSAtable[3][9] = 1003;
	FSAtable[3][10] = 1003;
	FSAtable[3][11] = 1003;
	FSAtable[3][12] = 1003;
	FSAtable[3][13] = 1003;
	FSAtable[3][14] = 1003;
	FSAtable[3][15] = 1003;
	FSAtable[3][16] = 1003;
	FSAtable[3][17] = 1003;
	FSAtable[3][18] = 1003;
	FSAtable[3][19] = 1003;
	FSAtable[3][20] = 1003;
	FSAtable[3][21] = 1003;
	FSAtable[3][22] = 1003;

	// '<' state (4)
	FSAtable[4][0] = 1004;
	FSAtable[4][1] = 1004;
	FSAtable[4][2] = 1004;
	FSAtable[4][3] = 1004;
	FSAtable[4][4] = 1004;
	FSAtable[4][5] = 1004;
	FSAtable[4][6] = 1004;
	FSAtable[4][7] = 1004;
	FSAtable[4][8] = 1004;
	FSAtable[4][9] = 1004;
	FSAtable[4][10] = 1004;
	FSAtable[4][11] = 1004;
	FSAtable[4][12] = 1004;
	FSAtable[4][13] = 1004;
	FSAtable[4][14] = 1004;
	FSAtable[4][15] = 1004;
	FSAtable[4][16] = 1004;
	FSAtable[4][17] = 1004;
	FSAtable[4][18] = 1004;
	FSAtable[4][19] = 1004;
	FSAtable[4][20] = 1004;
	FSAtable[4][21] = 1004;
	FSAtable[4][22] = 1004;

	// '>' state (5)
	FSAtable[5][0] = 1005;
	FSAtable[5][1] = 1005;
	FSAtable[5][2] = 1005;
	FSAtable[5][3] = 1005;
	FSAtable[5][4] = 1005;
	FSAtable[5][5] = 1005;
	FSAtable[5][6] = 1005;
	FSAtable[5][7] = 1005;
	FSAtable[5][8] = 1005;
	FSAtable[5][9] = 1005;
	FSAtable[5][10] = 1005;
	FSAtable[5][11] = 1005;
	FSAtable[5][12] = 1005;
	FSAtable[5][13] = 1005;
	FSAtable[5][14] = 1005;
	FSAtable[5][15] = 1005;
	FSAtable[5][16] = 1005;
	FSAtable[5][17] = 1005;
	FSAtable[5][18] = 1005;
	FSAtable[5][19] = 1005;
	FSAtable[5][20] = 1005;
	FSAtable[5][21] = 1005;
	FSAtable[5][22] = 1005;

	// '==' state (6)
	FSAtable[6][0] = 1006;
	FSAtable[6][1] = 1006;
	FSAtable[6][2] = 1006;
	FSAtable[6][3] = 1006;
	FSAtable[6][4] = 1006;
	FSAtable[6][5] = 1006;
	FSAtable[6][6] = 1006;
	FSAtable[6][7] = 1006;
	FSAtable[6][8] = 1006;
	FSAtable[6][9] = 1006;
	FSAtable[6][10] = 1006;
	FSAtable[6][11] = 1006;
	FSAtable[6][12] = 1006;
	FSAtable[6][13] = 1006;
	FSAtable[6][16] = 1006;
	FSAtable[6][15] = 1006;
	FSAtable[6][16] = 1006;
	FSAtable[6][17] = 1006;
	FSAtable[6][18] = 1006;
	FSAtable[6][19] = 1006;
	FSAtable[6][20] = 1006;
	FSAtable[6][21] = 1006;
	FSAtable[6][22] = 1006;
	
	// ':' state (7)
	FSAtable[7][0] = 1007;
	FSAtable[7][1] = 1007;
	FSAtable[7][2] = 1007;
	FSAtable[7][3] = 1007;
	FSAtable[7][4] = 1007;
	FSAtable[7][5] = 1007;
	FSAtable[7][6] = 1007;
	FSAtable[7][7] = 1007;
	FSAtable[7][8] = 1007;
	FSAtable[7][9] = 1007;
	FSAtable[7][10] = 1007;
	FSAtable[7][11] = 1007;
	FSAtable[7][12] = 1007;
	FSAtable[7][13] = 1007;
	FSAtable[7][14] = 1007;
	FSAtable[7][15] = 1007;
	FSAtable[7][16] = 1007;
	FSAtable[7][17] = 1007;
	FSAtable[7][18] = 1007;
	FSAtable[7][19] = 1007;
	FSAtable[7][20] = 1007;
	FSAtable[7][21] = 1007;
	FSAtable[7][22] = 1007;

	// '+' state (8)
	FSAtable[8][0] = 1008;
	FSAtable[8][1] = 1008;
	FSAtable[8][2] = 1008;
	FSAtable[8][3] = 1008;
	FSAtable[8][4] = 1008;
	FSAtable[8][5] = 1008;
	FSAtable[8][6] = 1008;
	FSAtable[8][7] = 1008;
	FSAtable[8][8] = 1008;
	FSAtable[8][9] = 1008;
	FSAtable[8][10] = 1008;
	FSAtable[8][11] = 1008;
	FSAtable[8][12] = 1008;
	FSAtable[8][13] = 1008;
	FSAtable[8][14] = 1008;
	FSAtable[8][15] = 1008;
	FSAtable[8][16] = 1008;
	FSAtable[8][17] = 1008;
	FSAtable[8][18] = 1008;
	FSAtable[8][19] = 1008;
	FSAtable[8][20] = 1008;
	FSAtable[8][21] = 1008;
	FSAtable[8][22] = 1008;

	// '-' state (9)
	FSAtable[9][0] = 1009;
	FSAtable[9][1] = 1009;
	FSAtable[9][2] = 1009;
	FSAtable[9][3] = 1009;
	FSAtable[9][4] = 1009;
	FSAtable[9][5] = 1009;
	FSAtable[9][6] = 1009;
	FSAtable[9][7] = 1009;
	FSAtable[9][8] = 1009;
	FSAtable[9][9] = 1009;
	FSAtable[9][10] = 1009;
	FSAtable[9][11] = 1009;
	FSAtable[9][12] = 1009;
	FSAtable[9][13] = 1009;
	FSAtable[9][14] = 1009;
	FSAtable[9][15] = 1009;
	FSAtable[9][16] = 1009;
	FSAtable[9][17] = 1009;
	FSAtable[9][18] = 1009;
	FSAtable[9][19] = 1009;
	FSAtable[9][20] = 1009;
	FSAtable[9][21] = 1009;
	FSAtable[9][22] = 1009;

	// '*' state (10)
	FSAtable[10][0] = 1010;
	FSAtable[10][1] = 1010;
	FSAtable[10][2] = 1010;
	FSAtable[10][3] = 1010;
	FSAtable[10][4] = 1010;
	FSAtable[10][5] = 1010;
	FSAtable[10][6] = 1010;
	FSAtable[10][7] = 1010;
	FSAtable[10][8] = 1010;
	FSAtable[10][9] = 1010;
	FSAtable[10][10] = 1010;
	FSAtable[10][11] = 1010;
	FSAtable[10][12] = 1010;
	FSAtable[10][13] = 1010;
	FSAtable[10][14] = 1010;
	FSAtable[10][15] = 1010;
	FSAtable[10][16] = 1010;
	FSAtable[10][17] = 1010;
	FSAtable[10][18] = 1010;
	FSAtable[10][19] = 1010;
	FSAtable[10][20] = 1010;
	FSAtable[10][21] = 1010;
	FSAtable[10][22] = 1010;
	
	// '/' state (11)
	FSAtable[11][0] = 1011;
	FSAtable[11][1] = 1011;
	FSAtable[11][2] = 1011;
	FSAtable[11][3] = 1011;
	FSAtable[11][4] = 1011;
	FSAtable[11][5] = 1011;
	FSAtable[11][6] = 1011;
	FSAtable[11][7] = 1011;
	FSAtable[11][8] = 1011;
	FSAtable[11][9] = 1011;
	FSAtable[11][10] = 1011;
	FSAtable[11][11] = 1011;
	FSAtable[11][12] = 1011;
	FSAtable[11][13] = 1011;
	FSAtable[11][14] = 1011;
	FSAtable[11][15] = 1011;
	FSAtable[11][16] = 1011;
	FSAtable[11][17] = 1011;
	FSAtable[11][18] = 1011;
	FSAtable[11][19] = 1011;
	FSAtable[11][20] = 1011;
	FSAtable[11][21] = 1011;
	FSAtable[11][22] = 1004;

	// '%' state (12)
	FSAtable[12][0] = 1012;
	FSAtable[12][1] = 1012;
	FSAtable[12][2] = 1012;
	FSAtable[12][3] = 1012;
	FSAtable[12][4] = 1012;
	FSAtable[12][5] = 1012;
	FSAtable[12][6] = 1012;
	FSAtable[12][7] = 1012;
	FSAtable[12][8] = 1012;
	FSAtable[12][9] = 1012;
	FSAtable[12][10] = 1012;
	FSAtable[12][11] = 1012;
	FSAtable[12][12] = 1012;
	FSAtable[12][13] = 1012;
	FSAtable[12][14] = 1012;
	FSAtable[12][15] = 1012;
	FSAtable[12][16] = 1012;
	FSAtable[12][17] = 1012;
	FSAtable[12][18] = 1012;
	FSAtable[12][19] = 1012;
	FSAtable[12][20] = 1012;
	FSAtable[12][21] = 1012;
	FSAtable[12][22] = 1012;

	// '.' state (13)
	FSAtable[13][0] = 1013;
	FSAtable[13][1] = 1013;
	FSAtable[13][2] = 1013;
	FSAtable[13][3] = 1013;
	FSAtable[13][4] = 1013;
	FSAtable[13][5] = 1013;
	FSAtable[13][6] = 1013;
	FSAtable[13][7] = 1013;
	FSAtable[13][8] = 1013;
	FSAtable[13][9] = 1013;
	FSAtable[13][10] = 1013;
	FSAtable[13][11] = 1013;
	FSAtable[13][12] = 1013;
	FSAtable[13][13] = 1013;
	FSAtable[13][14] = 1013;
	FSAtable[13][15] = 1013;
	FSAtable[13][16] = 1013;
	FSAtable[13][17] = 1013;
	FSAtable[13][18] = 1013;
	FSAtable[13][19] = 1013;
	FSAtable[13][20] = 1013;
	FSAtable[13][21] = 1013;
	FSAtable[13][22] = 1013;
	
	// '(' state (14)
	FSAtable[14][0] = 1014;
	FSAtable[14][1] = 1014;
	FSAtable[14][2] = 1014;
	FSAtable[14][3] = 1014;
	FSAtable[14][4] = 1014;
	FSAtable[14][5] = 1014;
	FSAtable[14][6] = 1014;
	FSAtable[14][7] = 1014;
	FSAtable[14][8] = 1014;
	FSAtable[14][9] = 1014;
	FSAtable[14][10] = 1014;
	FSAtable[14][11] = 1014;
	FSAtable[14][12] = 1014;
	FSAtable[14][13] = 1014;
	FSAtable[14][14] = 1014;
	FSAtable[14][15] = 1014;
	FSAtable[14][16] = 1014;
	FSAtable[14][17] = 1014;
	FSAtable[14][18] = 1014;
	FSAtable[14][19] = 1014;
	FSAtable[14][20] = 1014;
	FSAtable[14][21] = 1014;
	FSAtable[14][22] = 1014;

	// ')' state (15)
	FSAtable[15][0] = 1015;
	FSAtable[15][1] = 1015;
	FSAtable[15][2] = 1015;
	FSAtable[15][3] = 1015;
	FSAtable[15][4] = 1015;
	FSAtable[15][5] = 1015;
	FSAtable[15][6] = 1015;
	FSAtable[15][7] = 1015;
	FSAtable[15][8] = 1015;
	FSAtable[15][9] = 1015;
	FSAtable[15][10] = 1015;
	FSAtable[15][11] = 1015;
	FSAtable[15][12] = 1015;
	FSAtable[15][13] = 1015;
	FSAtable[15][15] = 1015;
	FSAtable[15][15] = 1015;
	FSAtable[15][16] = 1015;
	FSAtable[15][17] = 1015;
	FSAtable[15][18] = 1015;
	FSAtable[15][19] = 1015;
	FSAtable[15][20] = 1015;
	FSAtable[15][21] = 1015;
	FSAtable[15][22] = 1015;

	// ',' state(16)
	FSAtable[16][0] = 1016;
	FSAtable[16][1] = 1016;
	FSAtable[16][2] = 1016;
	FSAtable[16][3] = 1016;
	FSAtable[16][4] = 1016;
	FSAtable[16][5] = 1016;
	FSAtable[16][6] = 1016;
	FSAtable[16][7] = 1016;
	FSAtable[16][8] = 1016;
	FSAtable[16][9] = 1016;
	FSAtable[16][10] = 1016;
	FSAtable[16][11] = 1016;
	FSAtable[16][12] = 1016;
	FSAtable[16][13] = 1016;
	FSAtable[16][16] = 1016;
	FSAtable[16][15] = 1016;
	FSAtable[16][16] = 1016;
	FSAtable[16][17] = 1016;
	FSAtable[16][18] = 1016;
	FSAtable[16][19] = 1016;
	FSAtable[16][20] = 1016;
	FSAtable[16][21] = 1016;
	FSAtable[16][22] = 1016;

	// '{' state(17)
	FSAtable[17][0] = 1017;
	FSAtable[17][1] = 1017;
	FSAtable[17][2] = 1017;
	FSAtable[17][3] = 1017;
	FSAtable[17][4] = 1017;
	FSAtable[17][5] = 1017;
	FSAtable[17][6] = 1017;
	FSAtable[17][7] = 1017;
	FSAtable[17][8] = 1017;
	FSAtable[17][9] = 1017;
	FSAtable[17][10] = 1017;
	FSAtable[17][11] = 1017;
	FSAtable[17][12] = 1017;
	FSAtable[17][13] = 1017;
	FSAtable[17][17] = 1017;
	FSAtable[17][15] = 1017;
	FSAtable[17][16] = 1017;
	FSAtable[17][17] = 1017;
	FSAtable[17][18] = 1017;
	FSAtable[17][19] = 1017;
	FSAtable[17][20] = 1017;
	FSAtable[17][21] = 1017;
	FSAtable[17][22] = 1017;

	// '}' state (18)
	FSAtable[18][0] = 1018;
	FSAtable[18][1] = 1018;
	FSAtable[18][2] = 1018;
	FSAtable[18][3] = 1018;
	FSAtable[18][4] = 1018;
	FSAtable[18][5] = 1018;
	FSAtable[18][6] = 1018;
	FSAtable[18][7] = 1018;
	FSAtable[18][8] = 1018;
	FSAtable[18][9] = 1018;
	FSAtable[18][10] = 1018;
	FSAtable[18][11] = 1018;
	FSAtable[18][12] = 1018;
	FSAtable[18][13] = 1018;
	FSAtable[18][18] = 1018;
	FSAtable[18][15] = 1018;
	FSAtable[18][16] = 1018;
	FSAtable[18][17] = 1018;
	FSAtable[18][18] = 1018;
	FSAtable[18][19] = 1018;
	FSAtable[18][20] = 1018;
	FSAtable[18][21] = 1018;
	FSAtable[18][22] = 1018;

	// ';' state (19)
	FSAtable[19][0] = 1019;
	FSAtable[19][1] = 1019;
	FSAtable[19][2] = 1019;
	FSAtable[19][3] = 1019;
	FSAtable[19][4] = 1019;
	FSAtable[19][5] = 1019;
	FSAtable[19][6] = 1019;
	FSAtable[19][7] = 1019;
	FSAtable[19][8] = 1019;
	FSAtable[19][9] = 1019;
	FSAtable[19][10] = 1019;
	FSAtable[19][11] = 1019;
	FSAtable[19][12] = 1019;
	FSAtable[19][13] = 1019;
	FSAtable[19][19] = 1019;
	FSAtable[19][15] = 1019;
	FSAtable[19][16] = 1019;
	FSAtable[19][17] = 1019;
	FSAtable[19][18] = 1019;
	FSAtable[19][19] = 1019;
	FSAtable[19][20] = 1019;
	FSAtable[19][21] = 1019;
	FSAtable[19][22] = 1019;

	// '[' state (20)
	FSAtable[20][0] = 1020;
	FSAtable[20][1] = 1020;
	FSAtable[20][2] = 1020;
	FSAtable[20][3] = 1020;
	FSAtable[20][4] = 1020;
	FSAtable[20][5] = 1020;
	FSAtable[20][6] = 1020;
	FSAtable[20][7] = 1020;
	FSAtable[20][8] = 1020;
	FSAtable[20][9] = 1020;
	FSAtable[20][10] = 1020;
	FSAtable[20][11] = 1020;
	FSAtable[20][12] = 1020;
	FSAtable[20][13] = 1020;
	FSAtable[20][20] = 1020;
	FSAtable[20][15] = 1020;
	FSAtable[20][16] = 1020;
	FSAtable[20][17] = 1020;
	FSAtable[20][18] = 1020;
	FSAtable[20][19] = 1020;
	FSAtable[20][20] = 1020;
	FSAtable[20][21] = 1020;
	FSAtable[20][22] = 1020;

	// ']' state(21)
	FSAtable[21][0] = 1021;
	FSAtable[21][1] = 1021;
	FSAtable[21][2] = 1021;
	FSAtable[21][3] = 1021;
	FSAtable[21][4] = 1021;
	FSAtable[21][5] = 1021;
	FSAtable[21][6] = 1021;
	FSAtable[21][7] = 1021;
	FSAtable[21][8] = 1021;
	FSAtable[21][9] = 1021;
	FSAtable[21][10] = 1021;
	FSAtable[21][11] = 1021;
	FSAtable[21][12] = 1021;
	FSAtable[21][13] = 1021;
	FSAtable[21][21] = 1021;
	FSAtable[21][15] = 1021;
	FSAtable[21][16] = 1021;
	FSAtable[21][17] = 1021;
	FSAtable[21][18] = 1021;
	FSAtable[21][19] = 1021;
	FSAtable[21][20] = 1021;
	FSAtable[21][21] = 1021;
	FSAtable[21][22] = 1021;

	//printf("FSA Table Complete\n");

}