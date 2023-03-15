// pt3.c  		230302

#include <stdio.h>

int main()
{
    float *ip;
    float num=5.1;
    ip= &num;

    printf("address num %p  \n", ip);
    printf("address ip %p  \n", &ip);
    printf("data  %f  \n", *ip);
    
    *ip=*ip+2.2;

    printf ("new data by name= %f \n", num);
    printf ("new data by *ip= %f \n", *ip);
    return 0;
}

/*
address num 0061FF18
address ip 0061FF1C
data  5.100000
new data by name= 7.300000
new data by *ip= 7.300000
*/