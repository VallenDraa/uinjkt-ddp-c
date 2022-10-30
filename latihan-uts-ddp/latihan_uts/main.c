// gcc main.c structs.c utils.c views.c -o XYZ
// program ini akan 

// deklarasi pustaka
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"
#include "views.h"

// deklarasi konstanta
const int DB_LENGTH = 8;

// deklarasi variable
  int i; // untuk menyimpan iterasi loop
  struct Motor db[] = {
    {"Revo FI 110", 30, 12500}, {"New Supra X 125 FI", 30, 18500}, 
    {"New Beat FI", 20, 12000}, {"Vega ZR", 10, 13500}, {"Jupiter Z", 20, 14000}, 
    {"Jupiter MX", 15, 17000}, {"Satria FU 150", 10, 19500}, {"Shogun R 125", 5, 14000}
  };

// deklarasi algoritma
int main() {

  for (i = 0; i < DB_LENGTH; i++) {
    printf("nama:%s - qty:%i - Rp.%lli\n", db[i].nama, db[i].qty, db[i].harga);
  }
  // menampilkan menu utama
  menuUtama();

  return 0;
}

