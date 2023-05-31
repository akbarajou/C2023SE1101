// wr1c.c		230501
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp= fopen("wrtest.txt", "w");
    printf("%p  %s  \n", fp, *fp);
    int num= 10;
    fprintf(fp, "%d  \n", num);
    num= 20;
    fprintf(fp, "%d  \n", num);

    fp= fp+1;
    printf("%p  %s  \n", fp, *fp);
    num= 30;
    fprintf(fp, "%d  \n", num);

    fp= fp-1;
    printf("%p  %s  \n", fp, *fp);
    num= 40;
    fprintf(fp, "%d  \n", num);

    fclose(fp);
    return 0;
}

/*
75D84660  (null)
75D84680  (null)
75D84660

wrtest.txt file
10  
20  
40  

*/