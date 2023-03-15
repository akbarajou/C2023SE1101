#include <stdio.h>

void fun(int B) {
    printf("Function 1  %d\n", B);
    B=B+10;
    printf("Function 2  %d\n", B);
    return;
}


int main() {
    int A= 15;
    printf("Before call  %d\n", A);
    fun(A);
    printf("After call  %d\n", A);
    return 0;
}

//Bu midtermda tushishi mumkin bo'lgan savol
//Kod qanday natijani qaytarishini ko'rsatib berish kerak

//15
//15
//25
//15
