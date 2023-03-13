// loop2.c  230302

#include <stdio.h>

int main()
{
    int i, sum=0;
    for (i=1; i<10; i+=2)
    {
        sum= sum+i;
        printf("%d   %d  \n", i, sum);
    }
    printf("End of For loop \n");
    return 0;
}

/*

C:\Users\User\cc2>loop2
1   1
3   4
5   9
7   16
9   25
End of For loop
*/
