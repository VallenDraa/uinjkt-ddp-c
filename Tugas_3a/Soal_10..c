// Program ini akan menghitung jumlah n bilangan ganji pertama
#include <stdio.h>

// deklarasi variable
int n, i;

// deklarasi algoritma
int main() {
  // meminta masukan kepada user
  printf("Masukkan angka: ");
  scanf("%i", &n);

  // proses menghitung
  for (i = 1; i <= n; i++) printf("%i ", (2 * i) - 1);

  return 0;
}