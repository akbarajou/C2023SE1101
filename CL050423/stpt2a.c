//  stpt2a.c  230501

#include<stdio.h>
struct person
{
   int age;
   float weight;
};
   
int main()
{
   struct person A1;
   struct person *ptr;
   ptr=&A1;
   A1.age= 22;
   A1.weight= 60.0;
   ptr->age= ptr->age+ 20;
   printf("%d  %d  %f  \n", A1.age, ptr->age, A1.weight);
   
   return 0;
}
   
/*  
42  42  60.000000  
*/
