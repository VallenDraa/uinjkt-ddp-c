/* Program ini akan menghitung jumlah N buah bilangan ganjil pertama */

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI KONSTANTA
#define TITIK_AWAL 1

// DEKLARASI ALGORITMA
int main() {
  // DEKLARASI VARIABLE
  int hasil = TITIK_AWAL;
  int jumlah_print;

  // meminta masukan kepada user
  printf("Masukkan jumlah deret bilangan ganjil: ");
  scanf("%i", &jumlah_print);

  // jika masukkan kurang dari sama dengan 0
  if (jumlah_print <= 0) {
    printf("%i", hasil);
  } else {
    for (int i = 0; i < jumlah_print; i++) {
      printf("%i ", hasil);
      hasil += 2;
    }
  }

  return 0;
}