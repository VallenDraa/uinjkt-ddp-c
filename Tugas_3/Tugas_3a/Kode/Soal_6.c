/* Program ini akan mengkonversi input integer ke bentuk angka romawi */ 

//DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI STRUCT
typedef struct { int num; char roman[2]; } Angka_Romawi;

int main() {
  // DEKLARASI KONSTANTA
  const Angka_Romawi LIST_DATA_KONVERSI[] = {
    { 1000, "M" }, { 900, "CM" }, { 500, "D" }, { 400, "CD" },
    { 100, "C" }, { 90, "XC" }, { 50, "L" }, { 40, "XL" },
    { 10, "X" }, { 9, "IX" }, { 5, "V" }, { 4, "IV" }, { 1, "I" }
  };
  const int PANJANG_ARR = sizeof(LIST_DATA_KONVERSI) / sizeof(LIST_DATA_KONVERSI[0]);

  // DEKLARASI VARIABLE
  int angka_masukan; // digunakan untuk menerima masukan dari user dan target utama ketika konversi
  int angka_transisi; // digunakan untuk transisi ke berikutnya setelah angka_masukan di konversi 
  
  // meminta user untuk menginput angka masukan dan hanya akan diterima ketika memenuhi kondisi 
  do {
    printf("\nMasukkan angka: ");
    scanf("%i", &angka_masukan);
    angka_transisi = angka_masukan;
  } while (angka_masukan <= 0 || angka_masukan > 3999);
  

  // Proses konversi
  while (angka_transisi > 0) {
    // mengiterasi seluruh item pada array list_data_konversi
    for (int i = 0; i < PANJANG_ARR; i++) {
      // akan terus mencetak angka romawi ketika angka masukan masih lebih besar dari data angka pada array list_data_konversi
      while (angka_masukan >= LIST_DATA_KONVERSI[i].num) {
        angka_masukan = angka_masukan - LIST_DATA_KONVERSI[i].num;
        printf("%s", LIST_DATA_KONVERSI[i].roman);
      }
    }
    printf(" - %i\n", angka_transisi);

    // proses transisi angka
    angka_transisi -= 1;
    angka_masukan = angka_transisi;
  }
  
  return 0;
}