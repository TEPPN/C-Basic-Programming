#include <stdio.h>

int main() {
    int umur;
    char nama[50];

    printf("Masukkan umur Anda: ");
    scanf("%d", &umur); // Membaca input integer

    printf("Masukkan nama Anda: ");
    scanf("%s", nama); // Membaca input string (satu kata)

    printf("Umur Anda adalah %d dan nama Anda adalah %s\n", umur, nama);

    return 0;
}
