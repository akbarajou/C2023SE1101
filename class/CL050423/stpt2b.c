//  stpt2b.c  230501

#include<stdio.h>
typedef struct
{
   int age;
   float weight;
} person;
   
int main()
{
   person A1;
   person *ptr;
   ptr= &A1;

   A1.age= 22;
   A1.weight= 60.0;
   ptr->age= ptr->age+ 30;
   printf("%x  %x  %f  \n", &A1.age, &ptr->age, A1.weight);
   
   return 0;
}
   
/*  
52  52  60.000000  
*/
