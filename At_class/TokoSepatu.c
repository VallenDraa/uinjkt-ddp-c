// PROGRAM TOKO SEPATU XYZ

// DEKLARASI PUSTAKA
#include <stdio.h>
#include <math.h>


// DEKLARASI KONSTANTA
const int VANS = 150; //variabel harga awal untuk masing-masing sepatu
const int NIKE = 200;
const int ADIDAS = 250;

// DEKLARASI VARIABLE
int qty_vans, qty_nike, qty_adidas; //variabel untuk menyimpan jumlah beli dari masing2 sepatu dari customer

float total_harga, total_diskon;
// 
// ALGORITMA
int main() {

  do {
    // masukkan untuk program
    printf("\nMasukan qty vans: ");
    scanf("%i", &qty_vans);

    printf("Masukan qty nike: ");
    scanf("%i", &qty_nike);

    printf("Masukan qty adidas: ");
    scanf("%i", &qty_adidas);
  
  } while (qty_vans <= 0 || qty_nike <= 0 || qty_adidas <= 0);
    

  // proses untuk menghitung total harga
  total_harga = (qty_vans * VANS) + (qty_nike * NIKE) + (qty_adidas * ADIDAS);

  // proses menghitung total diskon
  if (total_harga >= 5000) {
    total_diskon = total_harga * 0.1;
  } else if (total_harga >= 2000) {
    total_diskon = total_harga * 0.05;
  } else {
    total_diskon = total_harga * 0;
  }

  // proses mengurangi harga total - harga diskon
  total_harga = total_harga - total_diskon;
  printf("\nTotal harga pembelian setelah diskon sebesar: %.2f", total_harga);
  printf("\nTotal diskon sebesar: %.2f", total_diskon);

  return 0;
}