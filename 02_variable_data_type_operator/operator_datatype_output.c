#include <stdio.h>

int main(){

    char nama[30];
    int nim;
    char kom[30];
    int r;
    int sisi;
    int a;
    int b;
    int c;
    const float phi = 3.14;

    printf("========MASUKKAN BIODATA ANDA========\n");
    printf("Masukkan nama anda = ");
    scanf("%s",&nama);
    printf("Masukkan NIM anda = ");
    scanf("%d",&nim);
    printf("Masukkan kom anda = ");
    scanf("%s", &kom);
    printf("SELAMAT DATANG %s (%d), KOM %s\n", nama, nim, kom);
    printf("KALKULATOR MENGHITUNG KELILING BANGUN RUANG\n");

    printf("1. Keliling lingkaran\n");
    printf("Masukkan jari jari lingkaran = ");
    scanf("%d", &r);
    float hasil_lingkaran = 2*phi*r;
    printf("Keliling lingkaran = %.2fcm\n", hasil_lingkaran);

    printf("2. Keliling persegi\n");
    printf("Masukkan nilai sisi persegi = ");
    scanf("%d", &sisi);
    int hasil_persegi = 4*sisi;
    printf("Keliling persegi = %dcm\n", hasil_persegi);

    printf("3. Keliling segitiga\n");
    printf("Masukkan nilai a = ");
    scanf("%d", &a);
    printf("Masukkan nilai b = ");
    scanf("%d", &b);
    printf("Masukkan nilai c = ");
    scanf("%d", &c);
    int hasil_segitiga = a + b + c;
    printf("Keliling segitiga = %dcm\n", hasil_segitiga);

return 0;
}
