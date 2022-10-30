// program untuk menentukan apakah nilai input berupa karakter a
#include <stdio.h>
#include <stdbool.h>

// deklarasi variable
char input_char;

// deklarasi fungsi
bool is_input_a(char huruf);

// deklarasi algoritma
int main()
{
  // meminta masukan dari user
  printf("Masukkan huruf : ");
  scanf("%c", &input_char);

  // menampilkan hasil
  is_input_a(input_char)
      ? printf("Input berupa karakter a")
      : printf("Input bukan berupa karakter a");

  return 0;
}

// definisi fungsi
bool is_input_a(char huruf)
{
  bool hasil = huruf == 'a' || huruf == "A";
  return hasil;
}