// program untuk mengkonversi huruf kecil menjadi huruf besar
#include <stdio.h>

// deklarasi konstanta
const int JUMLAH_PINDAH = 32;

// deklarasi variable
char input_char;

// deklarasi fungsi
int toLower(char huruf); // konversi manual tanpa library ctype.h

// deklarasi algoritma
int main()
{
  printf("Masukan Huruf :");
  scanf("%c", &input_char);

  printf("\nHuruf Lowercase dari %c adalah %c", input_char, toLower(input_char));
}

// definisi fungsi
// akan mengembalikan nilai pada tabel ascii
int toLower(char huruf)
{
  // mendapatkan nilai pada tabel ascii
  int hasil = huruf >= 65 && huruf <= 90
                  ? huruf + JUMLAH_PINDAH
                  : huruf;

  return hasil;
}