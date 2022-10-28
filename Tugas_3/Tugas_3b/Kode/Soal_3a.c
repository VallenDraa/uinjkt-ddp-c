/* Program ini akan mencetak bentuk diamond 7 tingkat */

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI ALGORTIMA
int main()
{
  /*
    loop akan dibagi menjadi dua bagian 1/2 banyak baris untuk bagian atas dan sebaliknya
    jika jumlah baris adalah ganjil maka akan ditambah 1 agar segitiga seimbang
    Dalam contoh ini 7, maka jumlah input baris akan menjadi 8
  */

  // Loop ini akan mencetak bagian atas
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4 - i; j++)
      printf(" ");
    for (int k = 0; k < i * 2 - 1; k++)
      printf("*");
    printf("\n");
  }

  // Loop ini akan mencetak bagian bawah
  for (int i = 4; i > 0; i--)
  {
    for (int j = 4 - i; j > 0; j--)
      printf(" ");
    for (int k = i * 2 - 1; k > 0; k--)
      printf("*");
    printf("\n");
  }

  return 0;
}
