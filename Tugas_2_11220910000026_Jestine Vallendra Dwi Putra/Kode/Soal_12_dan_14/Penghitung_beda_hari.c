// File berisi utility function yang akan digunakan di soal no 12 dan 14
// DEKLARASI PUSTAKA
#include <stdio.h>
#include <math.h>
#include "Penghitung_beda_hari.h"

// DEKLARASI GLOBAL CONST
const int HARI_BULAN[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Array berisi hari dalam bulan yang berurutan

// DEKLARASI FUNGSI
int cek_tahun_kabisat(int tahun)
{
  return (tahun % 4 == 0) && ((tahun % 400 == 0) || (tahun % 100 != 0));
}

int hitung_perbedaan_hari(Date start, Date end)
{
  // placeholder untuk pengembalian
  int perbedaan_hari = 0, perbedaan_bulan = 0;
  int perbedaan_tahun = end.tahun - start.tahun;
  int month_counter = start.bulan, year_counter = start.tahun;

  // menentukan perbedaan bulan
  if (end.bulan == start.bulan)
  {
    perbedaan_bulan = perbedaan_tahun != 0 ? (12 + (12 * perbedaan_tahun)) : 0;
  }
  else if (end.bulan > start.bulan)
  {
    perbedaan_bulan = (end.bulan - start.bulan) + (perbedaan_tahun != 0 ? (12 * perbedaan_tahun) : 0);
  }
  else
  {
    perbedaan_bulan = (end.bulan - start.bulan) + (perbedaan_tahun != 0 ? (12 * perbedaan_tahun) : 12);
  }

  // melakukan perulangan sebanyak 'perbedaan_bulan' dan menambahkan jumlah hari
  // sesuai nilai elemen array 'HARI_BULAN' pada index 'month_counter'
  if (perbedaan_bulan != 0)
  {
    for (int i = 0; i < perbedaan_bulan; i++)
    {
      // pengecekan tahun kabisat
      perbedaan_hari += month_counter != 2
                            ? HARI_BULAN[month_counter - 1]
                        : cek_tahun_kabisat(year_counter) ? 29
                                                          : 28;

      // me-reset 'month_counter' jika sudah melebihi jumlah bulan yang ada
      // dan juga menambah 'year_counter'
      month_counter++;
      if (month_counter > 12)
      {
        month_counter = 1;
        year_counter++;
      }
    }
  }

  // pengembalian hasil perhitungan perbedaan hari
  if (end.hari == start.hari)
    return perbedaan_hari;
  return perbedaan_hari + (end.hari > start.hari ? (end.hari - start.hari) : -(start.hari - end.hari));
}

// DEKLARASI PROSEDUR
void menu_input_tanggal(int *hari, int *bulan, int *tahun)
{
  do
  {
    printf("Masukkan bulan: ");
    scanf("%i", bulan);
  } while (*bulan <= 0 || *bulan > 12);

  do
  {
    printf("Masukkan tanggal: ");
    scanf("%i", hari);
  } while (*hari <= 0 || *hari > HARI_BULAN[*bulan - 1]);

  printf("Masukkan tahun: ");
  scanf("%i", tahun);
}
