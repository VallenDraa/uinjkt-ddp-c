/* Program ini akan membaca karakter sebanyak N karakter sesuai dengan input user dan mencetaknya ke layar */

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI ALGORITMA
int main() {
  int jumlah_karakter; // DEKLARASI VARIABLE

  // Meminta masukkan jumlah karakter dari user
  do { 
    printf("Jumlah karakter: ");
    scanf("%i", &jumlah_karakter);
  } while (jumlah_karakter <= 0);
  
  char input_str[jumlah_karakter + 1]; // DEKLARASI STRING PENAMPUNG KARAKTER

  // Meminta masukkan karakter dari user
  for (int i = 0; i < jumlah_karakter; i++) {
    printf("Masukkan Karakter ke-%i: ", i + 1);
    scanf(" %c", &input_str[i]);
  }

  // untuk mengakhiri string
  input_str[jumlah_karakter] = '\0';
    
  // Mencetak string
  printf("Hasil Masukan Adalah %s", input_str);

  return 0;
}