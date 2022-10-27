// program no 6
//{.....................}

// deklarasi pustaka
#include <stdio.h>
#include <string.h>

// prosedur
void revstr(char str1[])
{
  // deklarasi variabel
  int i, len, temp;
  len = strlen(str1); // gunakan strlen() untuk menentukan jarak string

  for (i = 0; i < len / 2; i++)
  {
    // variabel temp untuk menahan string untuk sementara
    temp = str1[i];
    str1[i] = str1[len - i - 1];
    str1[len - i - 1] = temp;
  }
}

// algoritma
int main()
{
  char str[50]; // ukuran char str
  printf(" Enter the string: ");
  gets(str); // gunakan fungsi gets() untuk mengambil string

  printf(" \n sebelum di balik: %s \n", str);

  // call revstr() function
  revstr(str);
  printf(" setelah di balik: %s", str);
}
