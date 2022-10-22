//Program ini akan menghitung luas dan keliling dari segitiga

// DEKLARASI PUSTAKA
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// DEKLARASI GLOBAL VARIABLE
double alas, tinggi;
char tipeOperasi;

// DEKLARASI FUNGSI OPERASI
double hitungHasil(double alas, double tinggi) {
  return tipeOperasi == 'l' 
    ? (alas * tinggi) / 2 
    : alas + tinggi + (sqrt(pow(alas, 2) + pow(tinggi, 2)));
}

// DEKLARASI ALGORTIMA
int main() {
  while(true) {
    printf("\nPenghitung Luas dan Keliling Segitiga");
    printf("\nMasukkan tipe operasi !");
    printf("\nLuas (l)");
    printf("\nKeliling (k)");
    printf("\nKeluar dari program (q)");
    printf("\n\ninput: ");
    scanf(" %c", &tipeOperasi);


    if (tipeOperasi == 'l' || tipeOperasi == 'k') {
      printf("Masukkan panjang alas segitiga: ");
      scanf(" %lf", &alas);
      printf("Masukkan tinggi segitiga: ");
      scanf(" %lf", &tinggi);

      printf("%s segitiga: %.2lf\n", tipeOperasi == 'l' ? "Luas" : "Keliling", hitungHasil(alas, tinggi));
    } else if (tipeOperasi == 'q') {
      printf("\nTerima Kasih Telah Menggunakan Program Ini !");
      break;
    } else {
      printf("\nMasukkan tipe operasi yang tepat (l/k) !\n");
    }
  }
  
  return 0;
}