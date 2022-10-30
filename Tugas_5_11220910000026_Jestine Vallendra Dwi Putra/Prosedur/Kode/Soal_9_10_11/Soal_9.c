// gcc date.c Soal_9.c -o Soal_9
// Program ini berisi prosedur yang menerima nama hari sekarang dan menentukan hari sebelumnya
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "date.h"

// deklarasi variable
Date Input = {0, 0, 0}, Output = {0, 0, 0};
char input_tanggal[12], prev_tanggal[12];

// deklarasi prosedur
void tgl_kemarin(Date input, Date *output);

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
  tgl_kemarin(Input, &Output);

  return 0;
}

// definisi prosedur
void tgl_kemarin(Date input, Date *output)
{
  if (input.hari - 1 == 0)
  {
    const int is_prev_year = input.bulan - 1 == 0;
    printf("%i", is_prev_year);

    output->hari = HARI_BULAN[is_prev_year ? 11 : Input.bulan - 1];
    output->bulan = is_prev_year ? 12 : input.bulan - 1;
    output->tahun = is_prev_year ? input.tahun - 1 : input.tahun;
  }
  else
  {
    output->hari = Input.hari - 1;
    output->bulan = input.bulan;
    output->tahun = input.tahun;
  }

  printf("Tanggal hari ini: %i-%i-%i\n", input.hari, input.bulan, input.tahun);
  printf("Tanggal kemarin: %i-%i-%i", output->hari, output->bulan, output->tahun);
}
