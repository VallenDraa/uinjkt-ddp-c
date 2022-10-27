// PROGRAM untuk menghilangkan setiap karakter c dalam string
#include <stdio.h>
#include <string.h>

// DEKLARASI variabel global
char str[120];

// ALGORITMA
int main()
{
  // meminta masukan string dari user
  printf("masukkan sebuah string: ");
  fflush(stdin);
  gets(str);

  int str_len = strlen(str);

  for (int i = 0; i < str_len; i++)
  {
    // pengecekan character c dalam string
    if (str[i] == 'c')
    {
      // menghapus karakter c dalam string
      memmove(&str[i], &str[i + 1], strlen(str) - i);
      str_len--;
      i--;
    }
  }

  // Mencetak hasil
  printf("Hasil string tanpa huruf C%s\n", str);
  return 0;
}