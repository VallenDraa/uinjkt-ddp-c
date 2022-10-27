// Program ini akan mengkonversi nilai integer ke bentuk string integer tersebut
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Deklarasi variable
int input_int;
int ribuan, ratusan, puluhan, belasan, satuan;
char bentuk_str[][15] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};

// deklarasi prosedur
void show_bentuk_str(int integer);

// Deklarasi algoritma
int main()
{
  // meminta input int dari user
  do
  {
    printf("Masukkan angka : ");
    scanf("%i", &input_int);
  } while (input_int > 9999 || input_int < -9999);

  // output program
  system("cls");
  printf("\nHasil konversi bentuk integer %i: ", input_int);
  show_bentuk_str(input_int);
  return 0;
}

void show_bentuk_str(int integer)
{
  int is_minus, hasil;

  // untuk mengecek apakah nilai parameter berupa minus
  if (integer < 0)
  {
    is_minus = 1;
    hasil = abs(integer);
  }
  else
  {
    is_minus = 0;
    hasil = integer;
  }

  // operasi konversi
  satuan = hasil % 10;
  hasil = hasil / 10;
  belasan = satuan;

  puluhan = hasil % 10;
  hasil = hasil / 10;

  ratusan = hasil % 10;
  hasil = hasil / 10;

  ribuan = hasil % 10;
  hasil = hasil / 10;

  // jika seluruh hasil perhitungan adalah nol
  if (satuan == 0 && puluhan == 0 && ratusan == 0 && ribuan == 0)
  {
    printf("Nol");
    return NULL;
  }

  // jika input berupa angka minus
  if (is_minus)
    printf("Minus ");

  // validasi untuk ribuan
  if (ribuan != 0 && ribuan != 1)
  {
    printf("%s Ribu ", bentuk_str[ribuan]);
  }
  else if (ribuan == 1)
  {
    printf("Seribu ");
  }

  // validasi untuk Ratusan
  if (ratusan != 0 && ratusan != 1)
  {
    printf("%s Ratus ", bentuk_str[ratusan]);
  }
  else if (ratusan == 1)
  {
    printf("Seratus ");
  }

  // validasi untuk belasan
  if (belasan != 0 && belasan != 1 && puluhan == 1)
  {
    printf("%s Belas ", bentuk_str[belasan]);
  }
  else if (belasan == 1 && puluhan == 1)
  {
    printf("Sebelas ");
  }

  // validasi untuk puluhan
  if (puluhan != 0 && puluhan != 1)
  {
    printf("%s Puluh ", bentuk_str[puluhan]);
  }
  else if (satuan == 0 && puluhan == 1)
  {
    printf("Sepuluh ");
  }

  // validasi untuk satuan
  if (puluhan != 1)
    printf("%s", bentuk_str[satuan]);
}