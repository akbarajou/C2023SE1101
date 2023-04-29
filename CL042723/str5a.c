// str5a.c  	230427

#include <stdio.h>
#include<string.h>

int main()
{
    char A[10]= "how are";  
    printf("%s  \n", A);

  // A[10]= "apple";    Error

    printf("Enter A  ");
    scanf("%s", A);  	  // scanf is ok
    printf("%s  \n", A);

   strcpy(A, "asdfg");
   printf("%s  \n", A);

    return 0;
}

/*
how are
Enter A  qqwwee
qqwwee
asdfg
*/