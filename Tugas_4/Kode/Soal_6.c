// program ini akan membalikkan elemen char pada arr
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// deklarasi variable
char input_str[50];

// deklarasi prosedur
void balik_str(char input_str[]);

// deklarasi algoritma
int main()
{
  // meminta masukan string dari user
  printf("Masukkan sebuah string: ");
  fflush(stdin);
  gets(input_str);

  system("cls");
  printf("String sebelum di balik adalah %s\n", input_str);

  // call revstr() function
  revstr(input_str);
  printf(" setelah di balik: %s", input_str);
}

// definisi prosedur
void balik_str(char input_str[])
{
  // deklarasi variabel
  int i, str_len = strlen(input_str), temp;

  // proses pembalikkan elemen
  for (i = 0; i < str_len / 2; i++)
  {
    temp = input_str[i]; // temp akan mengandung nilai ascii karakter
    input_str[i] = input_str[str_len - i - 1];
    input_str[str_len - i - 1] = temp;
  }
}