// gcc date.c Soal_10.c -o Soal_10
// Program ini berisi prosedur yang menerima nama hari sekarang dan menentukan hari sebelumnya
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "date.h"

// deklarasi konstanta
const Date AWAL_ABAD_20 = {1, 1, 1900};

// deklarasi variable
Date Input = {0, 0, 0};
char input_tanggal[12];

// deklarasi prosedur
void jarak_dari_1900(Date input);

// deklarasi algoritma
int main()
{
  // meminta masukan hari dari user
  while (true)
  {
    printf("\nMasukkan Tanggal [dd-mm-yyyy]: ");
    fflush(stdin);
    gets(input_tanggal);

    // parsing
    Input.hari = atoi(strtok(input_tanggal, "-"));
    Input.bulan = atoi(strtok(NULL, "-"));
    Input.tahun = atoi(strtok(NULL, "-"));

    // validasi tahun
    if (Input.tahun < 1900)
    {
      printf("Illegal tahun\n");
      Input.tahun = 0;
      continue;
    }

    // validasi bulan
    if (Input.bulan > 12 || Input.bulan <= 0)
    {
      printf("Illegal Bulan\n");
      Input.bulan = 0;
      continue;
    }

    // validasi tanggal
    if (Input.hari > 0)
    {
      if (is_kabisat(Input.tahun) && Input.bulan == 2)
      {
        if (Input.hari > 29)
        {
          printf("Illegal Hari\n");
          Input.hari = 0;
          continue;
        }
      }
      else
      {
        if (Input.hari > HARI_BULAN[Input.bulan - 1])
        {
          printf("Illegal Hari\n");
          Input.hari = 0;
          continue;
        }
      }
    }
    else
    {
      printf("Illegal Hari\n");
      Input.hari = 0;
      continue;
    }

    if (Input.tahun != 0 && Input.bulan != 0 && input_tanggal != 0)
      break;
  }

  // pemanggilan prosedur
  jarak_dari_1900(Input);
  return 0;
}

void jarak_dari_1900(Date input)
{
  int perbedaan_hari = day_diff(AWAL_ABAD_20, input);

  printf("\nJumlah hari dari tanggal 1-1-1900 hingga %i-%i-%i adalah %i hari\n", input.hari, input.bulan, input.tahun, perbedaan_hari);
}
