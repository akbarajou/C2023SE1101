//  gpa2.c  	230504
#include <stdio.h>

struct AA  {
    float eng;
    float circ;
    float gpa;
};

int main() {
    struct AA kim;
    struct AA lee;

    kim.eng=3.6; kim.circ=4.1;
    lee.eng=3.6; lee.circ=4.6;
 
    kim.gpa= (kim.eng+ kim.circ)/2;
    lee.gpa= (lee.eng+ lee.circ)/2;
    printf("gpas %f  %f  \n", kim.gpa, lee.gpa);
 
    return 0;
}

/*
gpas 3.850000  4.100000
*/