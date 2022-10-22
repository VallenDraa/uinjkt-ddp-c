// Program ini akan menukarkan tiga nilai
#include <stdio.h>

// deklarasi variable
int x, y, z;
int res_x, res_y, res_z;

// deklarasi algoritma
int main() {
  // meminta masukan kepada user
  printf("\nMasukkan nilai x: ");
  scanf("%i", &x);
  printf("\nMasukkan nilai x: ");
  scanf("%i", &y);
  printf("\nMasukkan nilai x: ");
  scanf("%i", &z);

  // proses penukaran
  res_y = x;
  res_z = y;
  res_x = z;

  // menampilkan hasil konversi
  printf("\nHasil Penukaran: \n");
  printf("Input: (%i, %i, %i)\n", x, y, z);
  printf("Output: (%i, %i, %i)\n", res_x, res_y, res_z);

  return 0;
}