#include<stdio.h>

int main(){
    int number;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Bilangan %d adalah bilangan genap.\n", number);
    }
}
