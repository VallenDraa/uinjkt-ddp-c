// Deklarasi Pustaka
#include <stdio.h>
#include <math.h>

// Deklarasi Variable
int angka;          // Variabel untuk menerima bilangan bulat
int faktorial = 1;  // Variabel untuk menghasilkan hasil faktorial

// Deklarasi Algoritma
int main() {
  // masukan program
  printf("Masukkan Angka: ");
  scanf("%i", &angka);

  // proses faktorial
  for (int i = angka; i >= 1; i--) faktorial = faktorial * i;

  // keluaran program
  printf("Faktorial dari %i adalah %i", angka, faktorial);  

  return 0;
}