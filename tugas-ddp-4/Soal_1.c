/* Program ini akan mencetak sebuah 5 tingkatan awal dari sebuah segitiga paskal */

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI KONSTANTA
#define BARIS 5

// DEKLARASI ALGORTIMA
int main() {

  // DEKLARASI VARIABLE
  int angka;

  // 1
  for (int i = 0; i < BARIS; i++) { 
    
    // 2
    for (int j = 0; j < BARIS - i; j++) printf(" "); 
    
    // 3
    for (int k = 0; k <= i; k++) { 
      angka = (k == 0 || k == i) ? 1 : (angka * (i - k + 1) / k);
      printf("%i ", angka);
    }

    printf("\n");
  }

  return 0;
}

/*
  Fungsi masing-masing for-loop :
    1. mencetak sumbu Y atau tinggi dari segitga sesuai banyak baris
    2. mencetak spasi sebelum angka agar segitiga berbentuk sama kaki
    3. mencetak angka di dalam segitiga pascal dan spasi agar membentuk segitiga sama kaki
*/