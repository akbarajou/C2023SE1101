// str5c.c  230427

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int *arr = malloc(2 * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;

    printf("%d  %d\n", arr[0], arr[1]);
    arr = realloc(arr, 3 * sizeof(int));

    arr[2] = 3;
    printf("%d\n", arr[2]);

    
    free(arr);
}
