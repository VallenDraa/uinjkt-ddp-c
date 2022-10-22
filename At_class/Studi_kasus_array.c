// Program hitung nilai
//{....................}
//{....................}

// DEKLARASI PUSTAKA
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

// DEKLARASI VARIABLE
char NIM[3][20], nama[3][20], nilai_huruf[3][5];
float formatif[3], uts[3], uas[3], nilai_akhir[3];
int i;

// DEKLARASI ALGORITMA
int main() {
  // masukan program Nim, nama, formatif, uts, uas
  for (i = 0; i < 3; i++) {
    printf("\nData mahasiswa ke - %i\n", i + 1);
    printf("Masukkan Nim: ");
    scanf("%s", &NIM[i]);
    printf("Masukkan nama: ");
    scanf("%s", &nama[i]);
    printf("Masukkan formatif: ");
    scanf("%f", &formatif[i]);
    printf("Masukkan uts: ");
    scanf("%f", &uts[i]);
    printf("Masukkan uas: ");
    scanf("%f", &uas[i]);
  }

  // proses program
  for (i = 0; i < 3; i++) {
    // proses menghitung nilai akhit
    nilai_akhir[i] = (formatif[i] * 0.4) + (uts[i] * 0.3) + (uas[i] * 0.3);
    
    if (nilai_akhir[i] >= 80) {
      strcpy(nilai_huruf[i], "A");
    } else if (nilai_akhir[i] >= 70) {
      strcpy(nilai_huruf[i], "B");
    } else if (nilai_akhir[i] >= 60) {
      strcpy(nilai_huruf[i], "C");
    } else if (nilai_akhir[i] >= 50) {
      strcpy(nilai_huruf[i], "D");
    } else {
      strcpy(nilai_huruf[i], "E");
    }
  }

  // keluaran program
  printf("Keluaran program:");  
  for (i = 0; i < 3; i++) {
    printf("\nData mahasiswa ke - %i\n", i + 1);
    printf("NIM: %s\n", &NIM[i]);
    printf("Nama: %s\n", &nama[i]);
    printf("Nilai Akhir: %.2f\n", &nilai_akhir[i]);
    printf("Nilai Huruf: %s\n", &nilai_huruf[i]);
  }
  
  return 0;
}