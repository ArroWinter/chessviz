#include <stdio.h>
#include <stdlib.h>
#include "p.h"
#include "P.h"
#include "board.h"
#include "horse.h"
#include "king.h"
#include "el.h"
#include "queen.h"
#include "rook.h"

int main()
{
    system("clear");
    char s[9][9], k[5];
    int z1 = 0, z2 = 0, z3 = 0, z4 = 0, z5 = 0, z6 = 0, z7 = 0, z8 = 0, z9 = 0, z10 = 0, 
z11 = 0, z12 = 0, z13 = 0, z14 = 0, flag1 = 0;
    fillboard(s);  
    board(s);

while (1){
    if (flag1 == 0) printf("Малые\n");
    else if (flag1 == 1) printf("Большие\n");
    for(int i = 0;i <= 5;i++) {
    k[i]=getchar();
    }

    system("clear");

    if (flag1 == 0) {
    z1 = pmove(k,s);
    z2 = phack(k,s);
    z5 = rook(k,s);
    z7 = horse(k,s);
    z9 = el(k,s);
    z11 = king(k,s);
    z13 = queen(k, s);
    if ((z1 == 1) && (z2 == 1) && (z5 == 1) && (z7 == 1) && (z9 == 1) && (z11 == 1) 
    && (z13 == 1)) {
    system("clear");
    printf("Неправильный ход\n"); 
    z1 = 0; 
    z2 = 0;
    z5 = 0; 
    z7 = 0; 
    z9 = 0; 
    z11 = 0;
    z13 = 0;
}
    else {
    z1 = 0; 
    z2 = 0; 
    z5 = 0; 
    z7 = 0; 
    z9 = 0; 
    z11 = 0;
    z13 = 0; 
    flag1=1;
}
}

    else if (flag1 == 1)
{
    z3 = Pmove(k,s);
    z4 = Phack(k,s);
    z6 = Rook(k,s);
    z8 = Horse(k,s);
    z10 = El(k,s);
    z12 = King(k,s);
    z14 = Queen(k,s);
    if ((z3 == 1) && (z4 == 1) && (z6 == 1) && (z8 == 1) && (z10 == 1) && (z12 == 1) 
    && (z14 == 1)) { 
    system("clear");
    printf("Неправильный ход\n"); 
    z3 = 0; 
    z4 = 0;
    z6 = 0; 
    z8 = 0; 
    z10 = 0; 
    z12 = 0; 
    z14 = 0;
}
    else {
    z3 = 0; 
    z4 = 0;
    z6 = 0; 
    z8 = 0; 
    z10 = 0; 
    z12 = 0; 
    z14 = 0; 
    flag1=0;
}
}

    board(s);
}
    return 0;
}
    return 0;
}
