// program untuk menghilangkan setiap karakter c dalam string
#include <stdio.h>
#include <string.h>

// deklarasi variable
char str[120];

// deklarasi algoritma
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
    if (str[i] == 'c' || str[i] == 'C')
    {
      // menghapus karakter c dalam string
      memmove(&str[i], &str[i + 1], strlen(str) - i);
      str_len--;
      i--;
    }
  }

  // Mencetak hasil
  printf("Hasil string tanpa huruf C adalah %s\n", str);
  return 0;
}