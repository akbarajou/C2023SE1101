// strcstr.c  	230425

#include <stdio.h>
#include <string.h>

typedef struct
{
    int x;
    char na[10];
}  AA;

int main()
{
    AA A1;
    A1.x= 3;
 //  A1.na= "AAA";  error

    strcpy(A1.na, "AAA");
    printf("%d  %s  \n", A1.x, A1.na);

    scanf("%s", A1.na);
    printf("%d  %s  \n", A1.x, A1.na);
    return 0;
}

/*
3  AAA
aaaaa
3  aaaaa
*/