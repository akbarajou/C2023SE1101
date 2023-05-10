//  yutest3.c  230503
#include <stdio.h>

typedef struct  {
   char *rate;
   char *name;
   char *loc;
} person;

int main()  {
   person a[3];
   a[0].rate = "good";  a[0].name = "Jack";  a[0].loc = "Namangan";
   a[1].rate = "good";  a[1].name = "John";  a[1].loc = "Tashkent";
   a[2].rate = "bad";  a[2].name = "Jack";   a[2].loc = "Tashkent";

   printf("%d  \n", sizeof(a));  	// 72
   printf("%x  %x  %x \n", a[0].rate, a[0].name, a[0].loc);
   printf("%x  %x  %x \n", a[1].rate, a[1].name, a[1].loc);
   printf("%x  %x  %x \n", a[2].rate, a[2].name, a[2].loc);
   printf("\n");

   printf("%x  %x  %x \n", &a[0].rate, &a[0].name, &a[0].loc);
   printf("%x  %x  %x \n", &a[1].rate, &a[1].name, &a[1].loc);
   printf("%x  %x  %x \n", &a[2].rate, &a[2].name, &a[2].loc);
   printf("\n");


   for(int i=0; i<3; i++)
   {
      printf("%s  %s  %s  \n", a[i].rate, a[i].name, a[i].loc);
      printf("%x  %x  %x  %x   %x  %x\n", a[i].rate, &a[i].rate, a[i].name, &a[i].name, a[i].loc, &a[i].loc);
      printf("\n");
   }

   char* bbb = a[0].rate;
   a[0].name = "Dan";
   a[1].name = "Johnathan";
   printf("%s   %x    %x   \n", a[0].name, a[0].name, &a[0].name);
   printf("%s   %x    %x   \n", a[1].name, a[1].name, &a[1].name);
   printf("\n");

   for(int i=0; i<50; i++)  {
      printf("%c", *(bbb+i));
   }
   return 0;
}


		
/*
36
00405064  00405069  0040506E
00405064  00405077  0040507C
00405085  00405069  0040507C

0061FEE0  0061FEE4  0061FEE8
0061FEEC  0061FEF0  0061FEF4
0061FEF8  0061FEFC  0061FF00

good  Jack  Namangan
00405064  0061FEE0  00405069  0061FEE4   0040506E  0061FEE8

good  John  Tashkent
00405064  0061FEEC  00405077  0061FEF0   0040507C  0061FEF4

bad  Jack  Tashkent
00405085  0061FEF8  00405069  0061FEFC   0040507C  0061FF00

Dan   004050C3    0061FEE4
Johnathan   004050C7    0061FEF0

good Jack Namangan John Tashkent bad %d
 %p  %p
*/