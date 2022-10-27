/* Program ini akan menghitung rata-rata dari 5 bilangan */

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI ALGORTIMA
int main() {

  // DEKLARASI VARIABLE
  float angka[5]; // Penampung masukan dari user
  float hasil = 0;  // Penampung rata-rata yang kemudian akan ditampilkan kepada user

  // Meminta 5 masukan berupa angka dari user 
  for (int i = 0; i < 5; i++) {
    printf("Masukkan angka ke-%i: ", i + 1); 
    scanf("%f", &angka[i]);
  }

  // Menghitung rata-rata
  for (int i = 0; i <= 5; i++) {
    hasil = (i == 5) ? (hasil / 5) : (hasil + angka[i]);
  }

  printf("Hasil rata-rata adalah: %.2f", hasil);

  return 0;
}
