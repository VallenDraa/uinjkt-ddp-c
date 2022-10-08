/* Program ini akan mencetak bentuk diamond 7 tingkat */

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI KONSTANTA
#define BARIS 7

// DEKLARASI ALGORTIMA
int main() {
  /// Loop ini akan mencetak bagian atas
  for (int i = 1; i <= 4; i++) { 
    for (int j = i; j <= 4; j++) printf("*");
    for (int k = 1; k < i * 2 - 1; k++) printf(" ");
    for (int j = i; j <= 4; j++) printf("*");
    printf("\n");
  }

  // Loop ini akan mencetak bagian bawah
  for (int i = 3; i >= 1; i--) { 
    for (int j = i; j <= 4; j++) printf("*");
    for (int k = 1; k < i * 2 - 1; k++) printf(" ");
    for (int j = i; j <= 4; j++) printf("*");
    printf("\n");
  }

  return 0;
}
