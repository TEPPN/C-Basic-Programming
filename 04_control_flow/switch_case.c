#include <stdio.h>

int main() {
    int day;

    printf("Masukkan nomor hari (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Hari Senin\n");
            break;
        case 2:
            printf("Hari Selasa\n");
            break;
        case 3:
            printf("Hari Rabu\n");
            break;
        case 4:
            printf("Hari Kamis\n");
            break;
        case 5:
            printf("Hari Jumat\n");
            break;
        case 6:
            printf("Hari Sabtu\n");
            break;
        case 7:
            printf("Hari Minggu\n");
            break;
        default:
            printf("Nomor hari tidak valid. Harap masukkan nomor antara 1 dan 7.\n");
            break;
    }

    return 0;
}
