// Program ini akan menghitungjumlah N buah bilangan ganjil pertama
#include <stdio.h>

// deklarasi variable
int hasil;
int jumlah_print;
int i;

// deklarasi algoritma
int main()
{
  // meminta masukan kepada user
  printf("Masukkan jumlah iterasi angka ganjil: ");
  scanf("%i", &jumlah_print);

  // menghitung jumlah n buah bilangan ganjil
  hasil = 2 * jumlah_print - 1;

  // menampilkan hasil akhir
  printf("Hasil adalah %i", hasil);

  return 0;
}
