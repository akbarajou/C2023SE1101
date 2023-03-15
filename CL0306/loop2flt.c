// loop2flt.c  	230302

#include <stdio.h>

int main()
{
    float i;
    float sum=0.0;
    for (i=1.0; i<2.0; i+=0.1)
    {
        sum= sum+i;
        printf("%f   %f  \n", i, sum);
    }
    printf("End of For loop \n");
    return 0;
}

/*
1.000000   1.000000
1.100000   2.100000
1.200000   3.300000
1.300000   4.600000
1.400000   6.000000
1.500000   7.500000
1.600000   9.100000
1.700000   10.800000
1.800000   12.600000
1.900000   14.500001
End of For loop
*/
