// program ini berisikan prosedur untuk mencari nilai input terkecil
#include <stdio.h>

// deklrasi variable
int i, jumlah_iterasi = 1;
float terkecil, arr_angka[100], input_angka;

// mencetak N buah bilangan genap pertama
void cari_terkecil(float arr_angka[], float *terkecil, int jumlah_iterasi);

int main() {
  while (9999) {
    // melakukan pengecekan kode keluar program
    if (input_angka == 9999) break;
    
    for (i = 0; i < sizeof(arr_angka) / sizeof(arr_angka[0]); i++) {
      // Meminta masukan dari user
      printf("Masukkan angka ke - %i [ketik 9999 untuk mengakhiri program]: ", i + 1);
      scanf("%f", &input_angka);

      // melakukan pengecekan kode keluar program
      if (input_angka == 9999) break;

      // memasukkan input-an angka ke dalam array jika input bukan 9999
      arr_angka[i] = input_angka;
      jumlah_iterasi += 1;
    }
  }

  // memanggil prosedur
  cari_terkecil(&arr_angka, &terkecil, jumlah_iterasi);
  return 0;
}

// Definisi Prosedur 
void cari_terkecil(float arr_angka[], float *terkecil, int jumlah_iterasi) {
  // secara default memasukkan item 0 dari array kepada var terkecil
  *terkecil = arr_angka[0];

  // looping arr_angka hingga nilai item bernilai NULL (belum diisi)
  for (int i = 1; i < jumlah_iterasi; i++) {
    // mengganti nilai terkecil jika angka berikutnya lebih kecil
    if (arr_angka[i] < *terkecil) { 
      *terkecil = arr_angka[i];
    }
  }
  
  printf("\nNilai terkecil dari seluruh input adalah: %.2f", *terkecil);
}