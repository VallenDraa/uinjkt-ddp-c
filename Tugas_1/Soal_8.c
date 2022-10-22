// Program ini akan mengkonversi meter ke dalam satuan inchi, kaki, dan yard
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// deklarasi variable
long long imigrasi, emigrasi, kelahiran, kematian, db[100];
char ulang[6] = "ya";
int year = 0, i;

// deklarasi algoritma
int main() {
  while (strcmp(ulang, "ya") == 0) {
    // meminta masukan kepada user
    printf("Masukkan data untuk tahun %i\n", year + 2022);
    printf("Masukkan jumlah imigrasi: ");
    scanf("%lli", &imigrasi);
    printf("Masukkan jumlah emigrasi: ");
    scanf("%lli", &emigrasi);
    printf("Masukkan jumlah kelahiran: ");
    scanf("%lli", &kelahiran);
    printf("Masukkan jumlah kematian: ");
    scanf("%lli", &kematian);

    // menghitung total penduduk dan memasukkan total penduduk ke database
    db[year] = imigrasi + emigrasi + kelahiran + kematian;
    year += 1;

    // menanyakan kepada user apakah ingin mengulang program
    do {
      printf("\nApakah anda ingin melakukan input data untuk tahun %i ?", year + 2022);
      printf("\nInput anda [ya/tidak]: ");
      fflush(stdin);
      gets(ulang);
    } while (strcmp(ulang, "ya") != 0 && strcmp(ulang, "tidak") != 0);
  }

  printf("Tabel data penduduk per tahun: \n");
  for (i = 0; i < year; i++) {
    printf("%i. %i - %lli\n", i + 1, i + 2022, db[i]);
  }
  
  return 0;
}