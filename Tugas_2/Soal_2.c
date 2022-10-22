/*
  Program ini menghitung harga akhir setelah dikurangin diskon.
  Diskon akan diberikan apabila total belanja mencapai Rp.100.000 
*/ 

//DEKLARASI PUSTAKA
#include <stdio.h>

int main() {
  // DEKLARASI KONSTANTA
  const float DISKON = 0.2; //diskon 20 persen

  // DEKLARASI VARIABLE
  float total_belanja, total_belanja_akhir, total_diskon;

  // meminta user untuk menginput total belanja
  while (total_belanja <= 0) {
    printf("Belanja min. Rp.100.000 untuk mendapatkan DISKON !");
    printf("\nMasukkan total belanja anda: ");
    scanf("%f", &total_belanja);
  }

  // melakukan pengecekan terhadap total belanja 
  if (total_belanja >= 100000) {
    total_diskon = total_belanja * DISKON;
    total_belanja_akhir = total_belanja - total_diskon;
  } else {
    total_belanja_akhir = total_belanja;
  }
  
  printf("\nTotal belanja anda adalah %.2f",  total_belanja);
  printf("\nAnda mendapatkan diskon sebesar %.2f", total_diskon);
  printf("\nTotal akhir belanja anda adalah %.2f", total_belanja_akhir);

  return 0;
}