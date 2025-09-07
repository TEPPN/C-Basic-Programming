#include <stdio.h>

int main(){
    //tipe data integer(bilangan bulat)
    int num = 6;
    printf("Nilai bilangan bulat : %d\n", num);

    //tipe data float(bilangan desimal)
    float num1 = 3.14;
    printf("Nilai bilangan desimal : %.2f\n", num1);

    //tipe data char(satu karakter)
    char character = 'S';
    printf("karakter : %c\n", character);

    //tipe data string(arry character)
    char strings[] = "Hello World!";
    printf("String : %s\n", strings);

    //tipe boolean(1 == true , 0 == false)
    _Bool benar = 1;
    _Bool salah = 0;
    printf("True : %d, False : %d\n", benar, salah);

    //tipe data long(bilangan bulat yang lebih besar)
    long long_int = 1234567890;
    printf("Nilai bilangan panjang : %ld\n", long_int);

    //tipe data double(bilangan desimal lebih panjang)
    double long_float = 3.14159265359;
    printf("Nilai bilangan double : %lf\n", long_float);

    //tipe data const tidak dapat diubah
    const char nama[] = "Aris";
    nama == "Momoi";
    printf("Output const: %s", nama);

}
