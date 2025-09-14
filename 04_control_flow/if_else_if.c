#include <stdio.h>

int main() {
    int score;

    printf("Masukkan nilai (0-100): ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        printf("Nilai Anda adalah A.\n");
    } else if (score >= 80 && score < 90) {
        printf("Nilai Anda adalah B.\n");
    } else if (score >= 70 && score < 80) {
        printf("Nilai Anda adalah C.\n");
    } else if (score >= 60 && score < 70) {
        printf("Nilai Anda adalah D.\n");
    } else if (score >= 0 && score < 60) {
        printf("Nilai Anda adalah E.\n");
    } else {
        printf("Nilai tidak valid. Harap masukkan nilai antara 0 dan 100.\n");
    }

    return 0;
}
