// program ini berisikan prosedur untuk menghitung iuran pada bank
#include <stdio.h>
#include <math.h>

// deklarasi variable
float saldo, iuran, bunga;
int jumlah_tahun_menabung;

// deklarasi prosedur
void hitung_iuran(float *iuran, float saldo, float bunga, int jumlah_tahun_menabung);

int main()
{
  // Meminta masukan dari user
  printf("Masukkan saldo anda: ");
  scanf("%f", &saldo);
  printf("Masukkan besar bunga bank dalam persen: ");
  scanf("%f", &bunga);
  bunga = bunga / 100;
  printf("Masukkan lamanya anda menabung dalam tahun: ");
  scanf("%i", &jumlah_tahun_menabung);

  // memanggil procedure
  hitung_iuran(&iuran, saldo, bunga, jumlah_tahun_menabung);
  return 0;
}

// Definisi Prosedur
void hitung_iuran(float *iuran, float saldo, float bunga, int jumlah_tahun_menabung)
{
  // deklarasi variabel
  float iuran_multiplier = 0;

  // menghitung multiplier iuran
  for (int i = 0; i < jumlah_tahun_menabung; i++)
  {
    iuran_multiplier = iuran_multiplier + pow((1 + bunga), i);
  }

  // menghitung iuran
  *iuran = saldo * iuran_multiplier;
  printf("Saldo anda Rp.%.2f yang ditabung selama %i menghasilkan iuran sebesar %.2f", saldo, jumlah_tahun_menabung, *iuran);
}
