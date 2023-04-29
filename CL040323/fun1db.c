// fun1db.c	  230401

#include <stdio.h>
int main() 
{
   int A[4]= {1,2,3,4};
   A[4]= {5,6,7,8};
   return 0;
}

/*
fun1db.c: In function 'main':
fun1db.c:7:10: error: expected expression before '{' token
    A[4]= {5,6,7,8};
          ^
*/