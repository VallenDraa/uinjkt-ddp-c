// Program ini berisi prosedur yang menerima jam-menit-tanggal dan akan dikurangi sebanyak n menit
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

// deklarasi variable
typedef struct
{
  int jam;
  int menit;
  int detik;
} Waktu;

Waktu waktu = {0, 0, 0}, output = {0, 0, 0};
char input_waktu[10];
int menit;

// deklarasi prosedur
void dua_digit(int integer, char separator);
void pengurangan_waktu(int menit, Waktu waktu, Waktu *output);
void cetak_jam(Waktu *waktu);

// deklarasi algoritma
int main()
{
  // meminta masukan jam dari user
  while (true)
  {
    printf("\nMasukkan Jam [jj:mm:dd]: ");
    fflush(stdin);
    gets(input_waktu);

    // parsing
    waktu.jam = atoi(strtok(input_waktu, ":"));
    waktu.menit = atoi(strtok(NULL, ":"));
    waktu.detik = atoi(strtok(NULL, ":"));

    // validasi jam
    if (waktu.jam > 24)
    {
      printf("Illegal jam\n");
      waktu.jam = 0;
      continue;
    }

    // validasi menit
    if (waktu.menit > 60 || waktu.menit <= 0)
    {
      printf("Illegal menit\n");
      waktu.menit = 0;
      continue;
    }

    // validasi detik
    if (waktu.detik > 60 || waktu.detik <= 0)
    {
      printf("Illegal detik\n");
      waktu.detik = 0;
      continue;
    }

    if (waktu.detik != 0 && waktu.menit != 0 && waktu.jam != 0)
      break;
  }

  // meminta masukan menit untuk dikurangin denggan jam dari user
  printf("\nMasukkan jumlah menit yang ingin dikurangi dengan jam: ");
  scanf("%i", &menit);

  // pemanggilan prosedur
  pengurangan_waktu(menit, waktu, &output);

  // menampilkan hasil pengurangan waktu
  cetak_jam(&output);
  return 0;
}

// definisi prosedur
void dua_digit(int integer, char separator)
{
  integer < 10 ? printf("0%i", integer) : printf("%i", integer);
  if (separator)
  {
    printf("%c", separator);
  }
}

void cetak_jam(Waktu *waktu)
{
  printf("Pukul: ");
  dua_digit(waktu->jam, ':');
  dua_digit(waktu->menit, ':');
  dua_digit(waktu->detik, ' ');
}

void pengurangan_waktu(int menit, Waktu waktu, Waktu *output)

{

  int jam = menit / 60;
  int sisa_menit = menit % 60;

  // nilai default output
  output->jam = waktu.jam;
  output->menit = waktu.menit;
  output->detik = waktu.detik;

  if (jam < 1)
  {
    output->jam = waktu.jam;
    output->menit = waktu.menit - menit;
  }
  else
  {
    if (sisa_menit > 0)
    {
      output->jam = waktu.jam - jam - 1;
      output->menit = abs(waktu.menit - sisa_menit);
    }
    else
    {
      output->jam = waktu.jam - jam;
    }
  }
}