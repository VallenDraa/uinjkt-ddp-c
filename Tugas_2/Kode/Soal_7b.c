/* Program ini akan mengkonversi input integer ke bentuk angka romawi */

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI STRUCT
typedef struct
{
  int num;
  char roman[2];
} Angka_Romawi;

int main()
{
  // DEKLARASI KONSTANTA
  const Angka_Romawi LIST_ANGKA[] = {
      {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
  const int PANJANG_ARR = sizeof(LIST_ANGKA) / sizeof(LIST_ANGKA[0]);

  // DEKLARASI VARIABLE
  int angka;

  // meminta user untuk menginput angka dengan beberapa batasan
  do
  {
    printf("\nMasukkan angka (input harus <= 3999): ");
    scanf("%i", &angka);
  } while (angka <= 0 || angka > 3999);

  // menampilkan hasil akhir dari angka romawi
  printf("\nAngka Romawi dari %i adalah: ", angka);
  for (int i = 0; i < PANJANG_ARR; i++)
  {
    while (angka >= LIST_ANGKA[i].num)
    {
      angka = angka - LIST_ANGKA[i].num;
      printf("%s", LIST_ANGKA[i].roman);
    }
  }

  return 0;
}