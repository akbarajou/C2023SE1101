/*
    CopyRight: Akbar Tangirov (E30C)
               Ajou University in Tashkent Electrical and Computer Engineering Department
    date: 05/21/2023
    description: 
    Question: Write output of this program, and explain the program.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    typedef struct
    {
        int x;
        int y;
    } pt;

    int daa, dbb;
    pt aa;
    aa.x = 2;
    aa.y = 2;

    printf("%d  %d\n", aa.x, aa.y);
    // daa = aa.x*aa.x + aa.y*aa.y;
    daa = pow(aa.x, 2) + pow(aa.y, 2);
    printf("daa = %d\n", daa);


    pt bb;
    bb.x = 2;
    bb.y = 2;

    printf("%d  %d\n", bb.x, bb.y);
    dbb = bb.x*bb.x + bb.y*bb.y;
    printf("dbb = %d\n", dbb);

    return 0;
}


