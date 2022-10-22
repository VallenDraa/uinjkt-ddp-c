// Program ini akan menghitungjumlah N buah bilangan ganjil pertama
#include <stdio.h>

// deklarasi konstanta
#define TITIK_AWAL 1;

// deklarasi variable
int hasil = TITIK_AWAL;
int jumlah_print;
int i;

// deklarasi algoritma
int main() {
  // meminta masukan kepada user
  printf("Masukkan jumlah iterasi angka ganjil: ");
  scanf("%i", &jumlah_print);

  // menghitung jumlah n buah bilangan ganjil
  for (i = 0; i < jumlah_print; i++) hasil += 2;

  // menampilkan hasil akhir
  printf("Hasil adalah %i", hasil);

  return 0;
}

