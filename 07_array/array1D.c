#include <stdio.h>

int main() {

    int nilai[4] = {10, 20, 30};

    printf("%d\n", nilai[2]); //Akses Elemen

    nilai[3] = 40; //Menambah Nilai
    printf("%d\n", nilai[3]);

    nilai[2] = 50; //Modifikasi Nilai
    printf("%d\n", nilai[2]);

    for (int i = 0; i < 4; i++){
        printf("%d\n", nilai[i]);
    }
    return 0;
}
