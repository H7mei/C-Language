# include <stdio.h>
# include <stdlib.h>

int main ()
{
    printf("Kalkulator Penjumlahan sederhana\n");
    double num1;
    double num2;
    printf("masukkan angka pertama :");
    scanf("%lf", &num1);
    printf("masukkan angka kedua   :");
    scanf("%lf", &num2);
    printf("Jawabanya              :%lf\n", num1 + num2);
    return 0;
}


/*
basic calculator
menggunakan double di karnakan dapat mengunakan input 
float atau koma
*/