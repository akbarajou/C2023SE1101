//  strcstr2b.c  230427

#include <stdio.h>
#include <string.h>

struct student {
   int id;
   char name[10];
   float perc;
};

int main(){
   int i;
   struct student reco[5];
  // student reco[5];  Error

   reco[0].id=1;
   reco[0].name[10]= "Tom";  // No input
   reco[0].perc = 86.5;

   reco[1].id=2;
   strcpy(reco[1].name, "Kim");
   reco[1].perc = 90.5;
   
   reco[2].id=3;
   strcpy(reco[2].name, "Lee");
   reco[2].perc = 91.5;

   for(i=0; i<3; i++){
      printf("Student: ");
      printf(" Id: %d ", reco[i].id);
      printf(" Name: %s ", reco[i].name);
      printf(" Percent: %f  \n",reco[i].perc);
   }
   return 0;
}

/*
Student:  Id: 1  Name:       Percent: 86.500000
Student:  Id: 2  Name: Kim  Percent: 90.500000
Student:  Id: 3  Name: Lee  Percent: 91.500000
*/