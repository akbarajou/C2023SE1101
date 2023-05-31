#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fp;

    fp = fopen ("file.txt", "w");
    fprintf(fp, "%s %s %s", "I", "am", "Akbar");

    fclose(fp);

    return(0);
}