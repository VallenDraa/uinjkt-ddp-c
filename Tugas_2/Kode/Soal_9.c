/* Program ini akan menentukan apakah berat badan anda termasuk ideal atau tidak */

// DEKLARASI PUSTAKA
#include <stdio.h>
#include <math.h>

int main()
{
  // DEKLARASI VARIABLE
  float b_ideal, berat, tinggi, perbedaan;

  // Meminta masukkan dari user
  printf("\nMasukkan tinggi anda: ");
  scanf("%f", &tinggi);

  // menghitung berat badan ideal
  b_ideal = (tinggi - 100) - ((tinggi - 100) * 0.1);
  printf("\nBerat badan ideal untuk tinggi %.2f cm dan %.2f kg\n", tinggi, b_ideal);

  // meminta masukkan berat badan dari user
  printf("Masukkan berat badan anda: ");
  scanf("%f", &berat);

  // menentukan tipe yang akan ditampilkan
  abs(berat - b_ideal) >= 0 && abs(berat - b_ideal) <= 2
      ? printf("\nBerat badan anda ideal")
      : printf("\nBerat badan anda tidak ideal");
  return 0;
}