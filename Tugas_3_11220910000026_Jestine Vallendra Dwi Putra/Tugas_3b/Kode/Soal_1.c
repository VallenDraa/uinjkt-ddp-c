/* Program ini akan mencetak 5 tingkatan awal dari sebuah segitiga paskal */

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI KONSTANTA
#define BARIS 5

// DEKLARASI ALGORTIMA
int main()
{
  // DEKLARASI VARIABLE
  int angka;

  // mencetak sumbu Y atau tinggi dari segitga sesuai banyak baris
  for (int i = 0; i < BARIS; i++)
  {
    // mencetak spasi sebelum angka agar segitiga berbentuk sama kaki
    for (int j = 0; j < BARIS - i; j++)
      printf(" ");
    // mencetak angka di dalam segitiga pascal dan spasi agar membentuk segitiga sama kaki
    for (int k = 0; k <= i; k++)
    {
      angka = (k == 0 || k == i) ? 1 : (angka * (i - k + 1) / k);
      printf("%i ", angka);
    }
    printf("\n");
  }

  return 0;
}