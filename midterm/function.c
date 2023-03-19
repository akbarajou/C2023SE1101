#include <stdio.h>

int main(void) {
    int x[] = {2, 4, 6, 8};
    int y[] = {2, 4, 6, 8};
    int z[] = {2, 4, 6, 8}; 
    for (int n=0; n<4; n++) {
        for (int m=0; m<4; m++) {
            for (int l=0; l<4; l++) {
                int fun = x[n]*y[m]*z[l];
                printf("f(%d,%d,%d)=%d\n",x[n], y[m], z[l], fun);
            }
        }
    }
}



