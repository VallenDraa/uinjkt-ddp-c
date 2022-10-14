// buku array jagged Budi Raharjo: Mudah Belajara c#
#include <stdio.h>

int main() {
  // Deklarasi variabel non array
  int bilangan1 = 1, bilangan2 = 2, bilangan3 = 3;

  // Deklarasi variabel array
  int A[3] = { 20, 10, 5 };
  int B[3] = { 7, 7, 5 };
  int C[3];

  for (int i = 0; i < 3; i++) C[i] = A[i] + B[i];
  for (int i = 0; i < 3; i++) printf("%i ", C[i]);

  return 0;
}