// program untuk konkatenasi dua buah string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// deklarasi variable
int str_len;

// deklarasi algoritma
int main()
{
  // meminta masukan dari user
  printf("masukkan panjang string pertama dan kedua: ");
  scanf("%i", &str_len);

  // deklarasi variable string
  char str_1[str_len];
  char str_2[str_len];
  char str_hasil[str_len * 2];

  // meminta masukan string 1 dari user
  printf("masukan string pertama: ");
  fflush(stdin);
  gets(str_1);

  // meminta masukan string 2 dari user
  printf("masukan string kedua: ");
  fflush(stdin);
  gets(str_2);

  // mencetak hasil konkatenasi 2 string
  printf("%s%s\n", str_1, str_2);
  return 0;
}