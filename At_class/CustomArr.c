// buku array jagged Budi Raharjo: Mudah Belajara c#
#include <stdio.h>

int main() {
  // Deklarasi variabel array
  int A[3], B[3], C[3];

  // get user input
  for (int i = 0; i < 3; i++) {
    printf("Masukkan nilai index %i dari Array A: ", i);
    scanf("%i", &A[i]);
  }

  printf("\n");
  
  for (int i = 0; i < 3; i++) {
    printf("Masukkan nilai index %i dari Array B: ", i);
    scanf("%i", &B[i]);
  }

  for (int i = 0; i < 3; i++) C[i] = A[i] + B[i];
  for (int i = 0; i < 3; i++) printf("%i ", C[i]);

  return 0;
}