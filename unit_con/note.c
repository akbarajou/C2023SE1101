/*
    CopyRight: Akbar Tangirov (E30C)
    Ajou University in Tashkent Electrical and Computer Engineering Department
    Date: 13/04/2023
    Project: Unit Convertor
    Description: This program converts units of measurement
*/
#include <stdio.h>
#include <math.h>
#include <string.h>


void categor(void);
void fahrenheit_to_celsius(void);
void celsius_to_fahrenheit(void);
void hex_to_dec(void);



int main(void)
{
    int choice;
    printf("Welcome to the Unit Convertor\n");
    categor();
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            fahrenheit_to_celsius();
            break;
        case 2:
            celsius_to_fahrenheit();
            break;
        case 3:
            hex_to_dec();
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 0);
}



void categor(void)
{
    printf("[1] Fahrenheit to Celsius\n");
    printf("[2] Celsius to Fahrenheit\n");
    printf("[3] Hexadecimal to Decimal\n");
}

void fahrenheit_to_celsius(void)
{
    float fahrenheit, celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("The temperature in Celsius is: %f\n\n", celsius);
}

void celsius_to_fahrenheit(void)
{
    float fahrenheit, celsius;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("The temperature in Fahrenheit is: %f\n\n", fahrenheit);
}

void hex_to_dec(void)
{
    char hex[17];
    int dec = 0, i = 0, val, len;
    printf("Enter the hexadecimal number: ");
    scanf("%s", hex);
    len = strlen(hex);
    len--;
    while (hex[i] != '\0')
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            val = hex[i] - 48;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            val = hex[i] - 97 + 10;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            val = hex[i] - 65 + 10;
        }
        dec += val * pow(16, len);
        i++;
        len--;
    }
    printf("The decimal value of %s is %d\n\n", hex, dec);
}
