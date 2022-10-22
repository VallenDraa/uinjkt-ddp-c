// Program ini akan mengkonversi n hari menjadi format jumlah tahun/jumlah bulan/jumlah hari
#include <stdio.h>

// deklarasi konstanta
const int SATU_BULAN = 30;
const int SATU_TAHUN = 365;

// deklarasi variable
int input_hari;
struct Hasil {
  int hari;
  int bulan;
  int tahun;
};
struct Hasil res;

// deklarasi algoritma
int main() {
  // meminta masukan kepada user
  printf("Masukkan lama projek dalam bentuk hari: ");
  scanf("%i", &input_hari);

  // proses konversi
  while (input_hari >= SATU_TAHUN) {
    res.tahun += 1;
    input_hari -= SATU_TAHUN;
  }

  while (input_hari >= SATU_BULAN) {
    res.bulan += 1;
    input_hari -= SATU_BULAN;
  }
  
  res.hari = input_hari;

  // menampilkan hasil konversi
  printf("\nLama projek adalah %i Tahun - %i Bulan - %i Hari", res.tahun, res.bulan, res.hari);
  return 0;
}