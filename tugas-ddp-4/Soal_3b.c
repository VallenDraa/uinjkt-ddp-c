/* Program ini akan mencetak bentuk diamond 7 tingkat */

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI KONSTANTA
#define BARIS 7

// DEKLARASI ALGORTIMA
int main() {
  // Loop untuk bagian atas
  for (int i = 1; i <= BARIS; i++) { 
    for (int j = i; j <= BARIS; j++) printf("*"); 
    for (int k = 1; k < i * 2 - 1; k++) printf(" ");
    for (int j = i; j <= BARIS; j++) printf("*"); 
    printf("\n");
  }

  // Loop untuk bagian bawah
  for (int i = BARIS - 1; i >= 1; i--) { 
    for (int j = BARIS; j >= i ; j--) printf("*"); 
    for (int k = i * 2 - 1; k > 1; k--) printf(" ");
    for (int j = BARIS; j >= i ; j--) printf("*"); 
    printf("\n");
  }

  return 0;
}
