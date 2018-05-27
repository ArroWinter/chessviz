#define CTEST_MAIN

#include "p.h"
#include "P.h"
#include "board.h"
#include "horse.h"
#include "king.h"
#include "el.h"
#include "queen.h"
#include "rook.h"
#include <ctest.h>

CTEST (p, Correct_p_move)
{
char k[5], s[9][9];
k[0]='e';
k[1]='7';
k[2]='-';
k[3]='e';
k[4]='5';  
s[7][5]='p';
s[5][5]=32;
int result = pmove(k,s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (p, Correct_p_hack)
{
char k[5], s[9][9];
k[0]='e';
k[1]='7';
k[2]='-';
k[3]='f';
k[4]='6';  
s[7][5]='p';
s[6][6]='R';
int result = phack(k,s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (P, Correct_P_move)
{
char k[5], s[9][9];
k[0] = 'e';
k[1] = '2';
k[2] = '-';
k[3] = 'e';
k[4] = '4'; 
s[4][5] = 32;
s[2][5] = 'P';
int result = Pmove(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (P, Correct_P_hack)
{
char k[5], s[9][9];
k[0] = 'e';
k[1] = '2';
k[2] = '-';
k[3] = 'f';
k[4] = '3';  
s[2][5] = 'P';
s[3][6] = 'r';
int result = Phack(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (p, Incorrect_p_move)
{
char k[5], s[9][9];
k[0] = 'e';
k[1] = '7';
k[2] = '-';
k[3] = 'f';
k[4] = '5';  
s[7][5] = 32;
s[5][5] = 'p';
int result = pmove(k, s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (p, Incorrect_p_hack)
{
char k[5], s[9][9];
k[0] = 'e';
k[1] = '7';
k[2] = '-';
k[3] = 'f';
k[4] = '8';  
s[7][5] = 'p';
s[6][6] = 'r';
int result = phack(k, s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (P, Incorrect_P_move)
{
char k[5], s[9][9];
k[0] = 'e';
k[1] = '2';
k[2] = '-';
k[3] = 'f';
k[4] = '4';  
s[4][5] = 32;
s[2][6] = 'P';
int result = Pmove(k, s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (P, Incorrect_P_hack)
{
char k[5], s[9][9];
k[0] = 'e';
k[1] = '2';
k[2] = '-';
k[3] = 'f';
k[4] = '3';  
s[2][5] = 'P';
s[3][6] = 'R';
int result = Phack(k, s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (r, Correct_r)
{
char k[5], s[9][9];
k[0] = 'h';
k[1] = '8';
k[2] = '-';
k[3] = 'h';
k[4] = '6';
for (int i = 0;i < 9;i++)
{
	for(int j = 0; j < 9;j++)
	{
		s[i][j] = 32;
	}
} 
s[8][8] = 'r';
s[6][8] = 32;
int result = rook(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (R, Correct_R)
{
char k[5], s[9][9];
k[0] = 'h';
k[1] = '1';
k[2] = '-';
k[3] = 'h';
k[4] = '3'; 
for (int i = 0;i < 9;i++)
{
	for(int j = 0; j < 9;j++)
	{
		s[i][j] = 32;
	}
}
s[1][8] = 'R';
s[3][8] = 32;
int result = Rook(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (R, Incorrect_R)
{
char k[5], s[9][9];
k[0] = 'h';
k[1] = '1';
k[2] = '-';
k[3] = 'g';
k[4] = '5';  
s[1][8] = 'R';
s[5][8] = 32;
int result = Rook(k, s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (h, Correct_h)
{
char k[5], s[9][9];
k[0] = 'g';
k[1] = '8';
k[2] = '-';
k[3] = 'h';
k[4] = '6';  
s[8][7] = 'h';
s[6][8] = 32;
int result = horse(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (H, Correct_H)
{
char k[5], s[9][9];
k[0] = 'g';
k[1] = '1';
k[2] = '-';
k[3] = 'h';
k[4] = '3';  
s[1][7] = 'H';
s[3][8] = 32;
int result = Horse(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (h, Incorrect_h)
{
char k[5], s[9][9];
k[0] = 'h';
k[1] = '8';
k[2] = '-';
k[3] = 'g';
k[4] = '4';  
s[1][8] = 'h';
s[5][8] = 32;
int result = horse(k, s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (e, Correct_e)
{
char k[5], s[9][9];
k[0] = 'f';
k[1] = '8';
k[2] = '-';
k[3] = 'h';
k[4] = '6';  
s[8][6] = 'e';
s[6][8] = 32;
int result = el(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (E, Correct_E)
{
char k[5], s[9][9];
k[0] = 'f';
k[1] = '1';
k[2] = '-';
k[3] = 'h';
k[4] = '3';  
s[1][6] = 'E';
s[3][8] = 32;
int result = El(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (e, Incorrect_e)
{
char k[5], s[9][9];
k[0] = 'f';
k[1] = '8';
k[2] = '-';
k[3] = 'g';
k[4] = '4';  
s[8][6] = 'e';
s[5][8] = 32;
int result = el(k, s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (k, Correct_k)
{
char k[5], s[9][9];
k[0] = 'e';
k[1] = '8';
k[2] = '-';
k[3] = 'e';
k[4] = '7';  
s[8][5] = 'k';
s[7][5] = 32;
int result = king(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (K, Correct_K)
{
char k[5], s[9][9];
k[0] = 'e';
k[1] = '1';
k[2] = '-';
k[3] = 'e';
k[4] = '2';  
s[1][5] = 'K';
s[2][5] = 32;
int result = King(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (k, Incorrect_k)
{
char k[5], s[9][9];
k[0] = 'e';
k[1] = '8';
k[2] = '-';
k[3] = 'e';
k[4] = '6';  
s[8][5] = 'k';
s[7][5] = 32;
int result = king(k, s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (q, Correct_q)
{
char k[5], s[9][9];
k[0] = 'd';
k[1] = '8';
k[2] = '-';
k[3] = 'd';
k[4] = '5';  
s[8][4] = 'q';
s[5][4] = 32;
int result = queen(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (Q, Correct_Q)
{
char k[5], s[9][9];
k[0] = 'd';
k[1] = '1';
k[2] = '-';
k[3] = 'd';
k[4] = '5';  
s[1][4] = 'Q';
s[5][4] = 32;
int result = Queen(k, s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

int main(int argc, const char** argv) 
{
    int test_res = ctest_main(argc, argv);
    return test_res;
}
