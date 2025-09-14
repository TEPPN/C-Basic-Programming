#include <stdio.h>

int main() {
    int age;

    printf("Masukkan usia Anda: ");
    scanf("%d", &age);

    if (age >= 0) {
        if (age <= 12) {
            printf("Anda adalah seorang anak-anak.\n");
        } else if (age <= 17) {
            printf("Anda adalah seorang remaja.\n");
        } else if (age <= 64) {
            printf("Anda adalah seorang dewasa.\n");
        } else {
            printf("Anda adalah seorang lansia.\n");
        }
    } else {
        printf("Usia tidak valid.\n");
    }

    return 0;
}
