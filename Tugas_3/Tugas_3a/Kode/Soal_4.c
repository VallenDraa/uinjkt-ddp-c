/*
  Program ini akan mencetak bentuk setengah diamond dengan jumlah tingkatan sesuai dengan masukan user
*/

#include <stdio.h>

int main() {
  int jumlah;

  printf("masukkan jumlah: ");
  scanf("%i", &jumlah);

  // Loop 1 untuk mencetak bagian atas
  for (int i = 0; i < jumlah; i++) {
    for (int j = i; j >= 1; j--) printf("*");
    printf("\n");
  }
  
  // Loop 1 untuk mencetak bagian bawah
  for (int i = jumlah; i >= 1; i--) {
    for (int j = 0; j < i; j++) printf("*");
    printf("\n");
  }

  return 0;
}