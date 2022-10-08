/* Program ini akan mencetak bentuk diamond 7 tingkat */

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI KONSTANTA
#define BARIS 7

// DEKLARASI ALGORTIMA
int main() {
  // Loop ini akan mencetak bagian atas
  for (int i = 0; i < BARIS; i++) { 
    for (int j = 0; j < BARIS - i; j++) printf(" "); 
    for (int k = 0; k < i; k++) printf("* ");
    printf("\n");
  }

  // Loop ini akan mencetak bagian bawah
  for (int i = BARIS; i > 0; i--) { 
    for (int j = BARIS - i; j > 0 ; j--) printf(" "); 
    for (int k = i; k > 0; k--) printf("* ");
    printf("\n");
  }

  return 0;
}
