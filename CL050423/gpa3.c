//  gpa3.c  	230504

#include <stdio.h>

typedef struct  {
   float eng;
   float circ;
   float gpa;
 // gpa= (eng+circ)/2;  // error

} AA ;

void fun(AA *pt) {
   *pt->gpa= (pt->eng + pt->circ)/2;
}

int main()  {
   AA kim;
   AA lee;

   kim.eng=3.6; kim.circ=4.1;
   lee.eng=3.6; lee.circ=4.6;
 
   fun(&kim);
   fun(&lee);
   printf("gpas %f  %f  \n", kim.gpa, lee.gpa);
 
   return 0;
}

/*
gpas 3.850000  4.100000
*/