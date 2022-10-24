/* Program ini akan mencetak bentuk diamond 7 tingkat */

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI VARIABLE
int baris;

// DEKLARASI PROCEDURE
void cetak_diamond(int baris);

// DEKLARASI ALGORTIMA
int main() {
  // meminta masukan kepada user
  printf("Masukkan jumlah baris yang ingin di print: ");
  scanf("%i", &baris);

  // memanggil procedure
  cetak_diamond(baris);
  return 0;
}

// definisi prosedur
void cetak_diamond(int baris) {
  int atas = baris / 2 + 1; 
  int bawah = baris % 2 != 0 ? (baris / 2 + 1) : (baris / 2); 

  // Loop ini akan mencetak bagian atas
  for (int i = 0; i < atas; i++) { 
    for (int j = 0; j < 4 - i; j++) printf(" ");
    for (int k = 0; k < i * 2 - 1; k++) printf("*");
    printf("\n");
  }

  // Loop ini akan mencetak bagian bawah
  for (int i = bawah; i > 0; i--) { 
    for (int j = 4 - i; j > 0; j--) printf(" "); 
    for (int k = i * 2 - 1; k > 0; k--) printf("*");
    printf("\n");
  }
}