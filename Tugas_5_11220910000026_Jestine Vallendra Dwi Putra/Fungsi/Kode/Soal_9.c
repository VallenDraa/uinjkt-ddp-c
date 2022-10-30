// program untuk mengkonversi huruf kecil menjadi huruf besar
#include <ctype.h>
#include <stdio.h>

// deklarasi konstanta
const int JUMLAH_PINDAH = 32;

// deklarasi variable
char input_char;

// deklarasi fungsi
int toUpper(char huruf); // konversi manual tanpa library ctype.h

// deklarasi algoritma
int main()
{
  printf("Masukan Huruf :");
  scanf("%c", &input_char);

  printf("\nHuruf Uppercase dari %c adalah %c", input_char, toUpper(input_char));

  return 0;
}

// definisi fungsi
// akan mengembalikan nilai pada tabel ascii
int toUpper(char huruf)
{
  // mendapatkan nilai pada tabel ascii
  int hasil = huruf >= 97 && huruf <= 122
                  ? huruf - JUMLAH_PINDAH
                  : huruf;

  return hasil;
}