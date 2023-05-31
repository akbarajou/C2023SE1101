/*
    CopyRight: Akbar Tangirov (E30C)
               Ajou University in Tashkent Electrical and Computer Engineering Department
    date: 05/20/2023
    description: Write a program that prints the ASCII values of the characters in a string.
    Question: Explain the results of printf in the program.
              Explain about empty spaces in the string fruit
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char fruit[8] = "banana";

    printf("%s\n", fruit);
    printf("strlen(fruit) = %d\n", strlen(fruit));
    printf("sizeof(fruit) = %d\n", sizeof(fruit));

    int i;
    for (i = 0; i < 8; i++)
    {
        printf("print 1  %c\n", fruit[i]);
    }
    for (i = 0; i < 8; i++)
    {
        printf("print 2  %d\n", fruit[i]);
    }

    return 0;
}



/*
    The string "banana" is stored in an array of 8 characters.
    The length of the string is 6, but the size of the array is 8.
    The last two characters are empty spaces.
    The characters in the string are printed using a for loop.
    The ASCII values of the characters are printed using a for loop.
*/










