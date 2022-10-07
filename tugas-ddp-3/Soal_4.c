#include <stdio.h>

int main() {
  int jumlah;

  printf("masukkan jumlah: ");
  scanf("%i", &jumlah);

  // loop 1 untuk membuat sumbu Y
  for (int i = 0; i < jumlah; i++) {
    // loop 1 untuk membuat sumbu X
    for (int j = i; j >= 1; j--) printf("*");
    

    printf("\n");
  }
  // loop 1 untuk membuat sumbu Y
  for (int i = jumlah; i >= 1; i--) {
    // loop 1 untuk membuat sumbu X
    for (int j = 0; j < i; j++) printf("*");
    

    printf("\n");
  }

  return 0;
}