/* Program ini akan mengkategorisasi umur seseorang */ 

//DEKLARASI PUSTAKA
#include <stdio.h>

int main() {
  // DEKLARASI VARIABLE
  int umur;

  // Meminta masukkan kepada user
  do {
    printf("Masukkan umur anda: ");
    scanf("%i", &umur);
  } while (umur < 0);

  // Menentukkan kategori berdasarkan umur
  if (umur >= 0 && umur < 5) printf("\nAnda adalah balita");
  else if (umur >= 5 && umur < 12) printf("\nAnda adalah anak-anak");
  else if (umur >= 12 && umur < 20) printf("\nAnda adalah Remaja");
  else if (umur >= 20 && umur < 60) printf("\nAnda adalah Dewasa");
  else printf("\nAnda adalah Lansia");

  return 0;
}