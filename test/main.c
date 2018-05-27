#define CTEST_MAIN

#include "p.h"
#include "P.h"
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
k[0]='e';
k[1]='2';
k[2]='-';
k[3]='e';
k[4]='4'; 
s[4][5]=32;
s[2][5]='P';
int result = Pmove(k,s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (P, Correct_P_hack)
{
char k[5], s[9][9];
k[0]='e';
k[1]='2';
k[2]='-';
k[3]='f';
k[4]='3';  
s[2][5]='P';
s[3][6]='r';
int result = Phack(k,s);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (p, Incorrect_p_move)
{
char k[5], s[9][9];
k[0]='e';
k[1]='7';
k[2]='-';
k[3]='f';
k[4]='5';  
s[7][5]=32;
s[5][5]='p';
int result = pmove(k,s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (p, Incorrect_p_hack)
{
char k[5], s[9][9];
k[0]='e';
k[1]='7';
k[2]='-';
k[3]='f';
k[4]='8';  
s[7][5]='p';
s[6][6]='r';
int result = phack(k,s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (P, Incorrect_P_move)
{
char k[5], s[9][9];
k[0]='e';
k[1]='2';
k[2]='-';
k[3]='f';
k[4]='4';  
s[4][5]=32;
s[2][6]='P';
int result = Pmove(k,s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (P, Incorrect_P_hack)
{
char k[5], s[9][9];
k[0]='e';
k[1]='2';
k[2]='-';
k[3]='f';
k[4]='3';  
s[2][5]='P';
s[3][6]='R';
int result = Phack(k,s);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

int main(int argc, const char** argv) 
{
    int test_res = ctest_main(argc, argv);
    return test_res;
}
