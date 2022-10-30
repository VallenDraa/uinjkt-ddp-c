// Program ini akan memiliki fungsi untuk mengembalikan nilai mutlak,
// nilai kali 2, dan bentuk angka berupa ganjil

// DEKLARASI PUSTAKA
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

// DEKLARASI VARIABEL
int input_int;

// deklarasi fungsi
int abs(int x);
int times_2(int x);
bool is_odd(int x);

// ALGORITMA
int main()
{
  // meminta masukan dari user
  printf("Masukan sebuah integer :");
  scanf("%i", &input_int);

  // memanggil fungsi dan mencetak hasil
  printf("nilai mutlak %i adalah %i \n", input_int, abs(input_int));
  printf("nilai double dari %i adalah %i \n", input_int, times_2(input_int));
  printf(is_odd(input_int) ? "%i adalah bilangan ganjil" : "%i bukan bilangan ganjil", input_int);
}

// DEKLARASI DEFINISI
int abs(int x)
{
  int hasil = x < 0 ? x * -1 : x;
  return hasil;
}
int times_2(int x)
{
  int hasil = 2 * x;
  return hasil;
}
bool is_odd(int x)
{
  bool hasil = x % 2 != 0;
  return hasil;
}