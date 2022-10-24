// program ini berisi prosedur untuk menampilkan elemen-elemen larik A yang lebih kecil dari elemen terkecilnya
#include <stdio.h>

// deklarasi variable
int arr[] = { 2, 10, 5, 20, 50 };
int hasil;

// deklarasi prosedur
void print_terkecil(int arr[], int *hasil);

// deklarasi algoritma  
int main() {
  print_terkecil(arr, &hasil);

  return 0;
}

// definisi prosedur
void print_terkecil(int arr[], int *hasil) {
  *hasil = arr[0];

  for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
    if (*hasil > arr[i]) *hasil = arr[i];
  }

  printf("Hasil terkecil di array adalah %i", *hasil);
}