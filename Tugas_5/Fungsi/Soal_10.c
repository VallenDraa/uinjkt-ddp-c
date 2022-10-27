// program untuk menentukan triple pythagoras
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

// deklarasi variable
float alas, tinggi, sisi_miring;

// deklarasi fungsi
bool is_tripel_pythagoras(float alas, float tinggi, float sisi_miring);

// deklarasi algoritma
int main()
{
  // Meminta masukan dari user
  printf("\nMasukkan Alas Segitiga:");
  scanf("%f", &alas);
  printf("\nMasukkan Tinggi Segitiga:");
  scanf("%f", &tinggi);
  printf("\nMasukkan Sisi Miring Segitiga:");
  scanf("%f", &sisi_miring);

  // memanggil fungsi dan  mencetak hasil
  is_tripel_pythagoras(alas, tinggi, sisi_miring)
      ? printf("%.2f, %.2f, %.2f adalah tripel pythagoras", alas, tinggi, sisi_miring)
      : printf("%.2f, %.2f, %.2f bukan tripel pythagoras", alas, tinggi, sisi_miring);
  return 0;
}

// definisi fungsi
bool is_tripel_pythagoras(float alas, float tinggi, float sisi_miring)
{
  bool hasil = alas < tinggi && tinggi < sisi_miring && alas < sisi_miring && tinggi < sisi_miring;

  return hasil;
}