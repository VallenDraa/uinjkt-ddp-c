// Program ini akan mensimulasi proses penyetoran dan penarikan uang pada bank
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// deklarasi variable global
long long saldo = 50000, nominal_masukan;
int kode_transaksi;
char isUlang[6];
enum Tipe_transaksi
{
  setor = 0,
  tarik = 1
};

// deklarasi algoritma
int main()
{
  // program mulai
  do
  {
    // meminta masukan kepada user
    do
    {
      // system("cls");
      printf("Saldo Anda: %lli\n", saldo);
      printf("Masukkan kode transaksi !\n\n");
      printf("0 untuk Setor Tunai\n");
      printf("1 untuk Tarik Tunai\n");
      printf("\nInput anda: ");
      scanf("%i", &kode_transaksi);
      // system("cls");
    } while (kode_transaksi != setor && kode_transaksi != tarik);

    // prompt masukan nominal akan sesuai dengan menu yang dipilih
    if (kode_transaksi == tarik)
    {
      // validasi proses melakukan penarikan tunai 1
      if (saldo > 10000)
      {
        printf("\nMasukkan jumlah penarikan: ");
        scanf("%lli", &nominal_masukan);

        // validasi proses melakukan penarikan tunai 2
        if (nominal_masukan < saldo && saldo - nominal_masukan >= 10000)
        {
          saldo -= nominal_masukan;
          printf("Anda menarik tunai sebanyak: Rp.%lli\n", nominal_masukan);
        }
        else
        {
          printf("Jumlah penarikan lebih besar dari saldo yang anda miliki !\n");
        }
      }
      else
      {
        printf("Penarikan tunai bisa dilakukan ketika saldo >Rp.10.000\n");
      }
    }
    else
    {
      printf("\nMasukkan jumlah setor: ");
      scanf("%lli", &nominal_masukan);
      saldo += nominal_masukan;
    }

    // menampilkan saldo
    printf("Saldo anda: Rp.%lli\n", saldo);

    // menanyakan kepada user apakah ingin mengulang program
    do
    {
      printf("\nApakah anda ingin melakukan transaksi lain ?\n");
      printf("Input anda [ya/tidak]: ");
      fflush(stdin);
      gets(isUlang);
    } while (strcmp(isUlang, "ya") != 0 && strcmp(isUlang, "tidak") != 0);
  } while (strcmp(isUlang, "ya") == 0);

  // user keluar dari program
  // system("cls");
  printf("Terima Kasih telah menggunakan Bank XYZ !");
  return 0;
}