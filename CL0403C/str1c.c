// str1c.c  	230402

#include <stdio.h>
int main()
{
    char A[10]= "how are";  
    printf("%s  \n", A);

  // A[10]= "apple";    Error

    printf("Enter A  ");
    scanf("%s", A);  	  // scanf is ok
    printf("%s  \n", A);
    return 0;
}

/*
how are
Enter A  asdf
asdf
*/