//  strcst3.c  230427

#include <stdio.h>

typedef struct     
{
    int num;
    char *name;
    char *addr;
} patient;

int main()
{
    patient A[5];
    A[0].num= 1;
    A[0].name= "john";
    A[0].addr= "Fergana";

    A[1].num= 2;
    A[1].name= "kim";
    A[1].addr= "Tashkent";

    A[2].num= 3;
    A[2].name= "Lee";
    A[2].addr= "Samark";

    for (int i=0; i<3; i++)
    {
        printf("%d  %s  %s  \n", A[i].num, A[i].name, A[i].addr);
    }
   return 0;
}

/*
1  john  Fergana
2  kim  Tashkent
3  Lee  Samark
*/