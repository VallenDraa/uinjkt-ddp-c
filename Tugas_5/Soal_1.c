// program ini berisikan prosedur untuk menghitung jumlah N buah bilangan genap pertama 
#include <stdio.h>

// deklrasi variable
int jumlah, hasil = 0;

// mencetak N buah bilangan genap pertama
void n_buah_genap_pertama(int jumlah, int *hasil);

int main() {
  // Meminta masukan dari user
  printf("Masukkan jumlah bilangan genap pertama: ");
  scanf("%i", &jumlah);

  // memanggil prosedur
  n_buah_genap_pertama(jumlah, &hasil);
  return 0;
}

// Definisi Prosedur 
void n_buah_genap_pertama(int jumlah, int *hasil) {
  for (int i = 0; i < jumlah ; i++) {
    printf("%i ", *hasil);
    *hasil += 2;
  }
}