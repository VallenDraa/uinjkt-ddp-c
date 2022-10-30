// Program ini akan menampilkan n bilangan pertama dari deret fibonacci 
#include <stdio.h>

// deklarasi variable
int a = 0;
int b = 1;
int hasil = 0;
int jumlah_deret;
int i;

// deklarasi algoritma
int main() {
  // meminta masukan jumlah deret kepada user
  printf("Masukkan jumlah deret yang ingin di tampilkan: ");
  scanf("%i", &jumlah_deret);

  // melakukan operasi fibonacci dan menampilkannya
  for (i = 0; i < jumlah_deret; i++) {
    printf("%i ", hasil);
    
    hasil = a + b;
    a = b;
    b = hasil;
  }

  return 0;
}





