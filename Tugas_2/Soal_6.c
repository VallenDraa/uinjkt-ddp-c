/* Program ini akan membulatkan angka ke bentuk pecahan terendah */ 

//DEKLARASI PUSTAKA
#include <stdio.h>

int main() {
  // DEKLARASI VARIABLE 
  int angka, nominal_pengurangan, hasil;

  // meminta masukkan kepada user
  printf("\nMasukkan angka: ");
  scanf("%i", &angka);

  // membulatkan nominal sesuai pecahan terkecil yang ada yaitu 25 
  nominal_pengurangan = angka % 25;
  if (nominal_pengurangan != 0) hasil = angka - nominal_pengurangan;

  // menulis nominal akhir setelah pembulatan
  printf("\nNominal Akhir: %i", hasil);

  return 0;
}