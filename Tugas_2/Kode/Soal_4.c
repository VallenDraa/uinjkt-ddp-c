/*
  Program ini menerima panjang 3 sisi segitiga sebagai input
  dan akan menentukan tipe segitiga berdasarkan input, dimana
  a<=b<=c. a adalah sisi miring, b adalah alas, dan c adalah tinggi
*/

// DEKLARASI PUSTAKA
#include <stdio.h>
#include <math.h>

int main()
{
  // DEKLARASI VARIABLE sisi-sisi segitiga
  int a, b, c; // sisi miring, alas, tinggi
  int total_kuadrat_a, total_kuadrat_b_dan_c;

  // meminta user untuk menginput panjang sisi-sisi segitiga
  do
  {
    printf("Masukkan Tinggi Segitiga: ");
    scanf("%i", &c);
  } while (c <= 0);

  // b tidak boleh lebih besar dari c
  do
  {
    printf("\nHARUS LEBIH BESAR DARI TINGGI !");
    printf("\nMasukkan alas Segitiga: ");
    scanf("%i", &b);
  } while (b < c || b <= 0);

  // a tidak boleh lebih besar dari b dan c
  do
  {
    printf("\nHARUS LEBIH BESAR DARI ALAS DAN TINGGI !");
    printf("\nMasukkan sisi miring Segitiga: ");
    scanf("%i", &a);
  } while (a < b || a < c || a <= 0);

  // menghitung penambahan antara b kuadrat dan c kuadrat
  total_kuadrat_b_dan_c = pow(b, 2) + pow(c, 2);
  total_kuadrat_a = pow(a, 2);

  // menentukan tipe segitiga
  if (total_kuadrat_a == total_kuadrat_b_dan_c)
  {
    printf("\nTipe segitiga anda adalah Siku-Siku");
  }
  else if (total_kuadrat_a < total_kuadrat_b_dan_c)
  {
    printf("\nTipe segitiga anda adalah Lancip");
  }
  else
  {
    printf("\nTipe segitiga anda adalah Tumpul");
  }

  return 0;
}