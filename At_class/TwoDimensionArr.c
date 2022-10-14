// buku array jagged Budi Raharjo: Mudah Belajara c#
#include <stdio.h>
#include <windows.h>

int main() {
  // Deklarasi variabel array
  int A[3][3] = {
    { 0, 1, 1 },
    { 1, 0, 1 },
    { 1, 1, 0 }
  };
  
  int B[3][3] = {
    { 1, 0, 0 },
    { 0, 1, 0 },
    { 0, 0, 1 }
  };

  int C[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) C[i][j] = A[i][j] + B[i][j];
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) printf("%i ", C[i][j]);
    printf("\n");
  }
  

  return 0;
}