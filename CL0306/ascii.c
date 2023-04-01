// ascii.c  230302 

#include<stdio.h>

int main() 
{
    char c;
    printf("Enter a character:  ");
    scanf("%c", &c);
    printf("ASCII value of %c= %d", c, c);
    return 0;
}

/*
C:\Users\User\cc2>ascii
Enter a character:  A
ASCII value of A= 65

C:\Users\User\cc2>ascii
Enter a character:  B
ASCII value of B= 66
*/

