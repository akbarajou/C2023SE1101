#include <stdio.h>
// convert hex to decimal


int hextodec(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'f' || s[i] >= 'A' && s[i] <= 'F'; ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
            n = 16 * n + (s[i] - '0');
        else if (s[i] >= 'a' && s[i] <= 'f')
            n = 16 * n + (s[i] - 'a' + 10);
        else if (s[i] >= 'A' && s[i] <= 'F')
            n = 16 * n + (s[i] - 'A' + 10);
    }
    return n;
}

int main()
{
    char s[100];
    printf("enter a hex number: ");
    scanf("%s", s);
    
    printf("%d\n", hextodec(s));
    return 0;
}







