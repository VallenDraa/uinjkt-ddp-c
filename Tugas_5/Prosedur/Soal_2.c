// program ini berisikan prosedur untuk menghitung jumlah N buah bilangan genap pertama 
#include <stdio.h>

// deklrasi variable
int iterasi_input = 0;
float input_angka, hasil, jumlah = 0;

// mencetak N buah bilangan genap pertama
void hitung_rata_rata(float jumlah, int iterasi_input, float *hasil);

int main() {
  while (9999) {
    // Meminta masukan dari user
    printf("Masukkan angka [ketik 9999 untuk mengakhiri program]: ");
    scanf("%f", &input_angka);

    // melakukan pengecekan kode keluar program
    if (input_angka == 9999) break;

    // proses penambahan total angka input
    jumlah += input_angka;
    iterasi_input += 1;
  }

  // memanggil prosedur
  hitung_rata_rata(jumlah, iterasi_input, &hasil);
  return 0;
}

// Definisi Prosedur 
void hitung_rata_rata(float jumlah, int iterasi_input, float *hasil) {
  *hasil = jumlah / iterasi_input;

  printf("\nHasil rata-rata adalah: %.2f", *hasil);
}