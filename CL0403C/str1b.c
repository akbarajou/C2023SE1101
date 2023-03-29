// str1b.c  	230402

#include <stdio.h>
int main()
{
    int i;
    char A[]= "Hello";
    printf ("%s \n", A);

    printf ("Enter name 1 ");
    scanf("%s", A);  	// A, &A all ok
    printf ("%s  \n", A);

    printf ("Enter name 2 ");
    scanf("%s", &A);
    printf ("%s  \n", A);

  // char A[]= "nice";   // Error
    return 0;
}

/*
Hello
Enter name 1 kim
kim
Enter name 2 park
park

str1b.c: In function 'main':
str1b.c:18:10: error: redefinition of 'A'
     char A[]= "nice";   // Error
          ^
str1b.c:7:10: note: previous definition of 'A' was here
     char A[]= "Hello";
          ^
*/