/*
  Program ini menerima 1 bilangan bulat sebagai input
  dan akan menentukan apakah bilangan tersebut termasuk kelipatan 4
*/

// DEKLARASI PUSTAKA
#include <stdio.h>

int main()
{
  // DEKLARASI VARIABLE
  int bilangan;

  // meminta user untuk menginput sebuah bilangan bulat
  while (bilangan <= 0)
  {
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%i", &bilangan);
  }

  // melakukan pengecekan modulus 4
  bilangan % 4 == 0 ? printf("Angka %i adalah bilangan kelipatan 4", bilangan)
                    : printf("Angka %i bukan bilangan kelipatan 4", bilangan);
  return 0;
}