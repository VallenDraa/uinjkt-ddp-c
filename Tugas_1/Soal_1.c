// Program ini akan mengkonversi masukan detik ke satuan hari, jam, dan menit
#include <stdio.h>

// deklarasi variable
float detik, menit, jam, hari;

// deklarasi algoritma
int main() {
  // meminta masukan kepada user
  printf("Masukkan detik untuk dikonversi ke hari, jam, dan menit: ");
  scanf("%f", &detik);

  // proses konversi
  menit = detik / 60; 
  jam = menit / 60; 
  hari = jam / 24;

  // menampilkan hasil konversi
  printf("\nHasil Konversi: \n");
  printf("Detik - %.2f\n", detik);
  printf("Menit - %.2f\n", menit);
  printf("Jam - %.2f\n", jam);
  printf("Hari - %.2f\n", hari);

  return 0;
}