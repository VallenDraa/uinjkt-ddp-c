// program ini berisi prosedur untuk menampilkan elemen-elemen larik A yang lebih kecil dari elemen terkecilnya
#include <stdio.h>

// deklarasi variable
int arr[] = { 4, 8, 6, 2 };
int hasil;

// deklarasi prosedur
void print_median(int arr[], int *hasil);

// deklarasi algoritma  
int main() {
  print_median(arr, &hasil);

  return 0;
}

// definisi prosedur
void print_median(int arr[], int *hasil) {
  int arr_len = sizeof(arr) / sizeof(arr[0]);
  
  // validasi panjang array untuk mengekesuki rumus yang berbeda 
  *hasil =  arr_len % 2 == 0 
              ? (arr[(arr_len / 2)] + arr[(arr_len / 2 + 1)]) / 2
              : arr[(arr_len + 1)] / 2;

  printf("Median dari array adalah %i", *hasil);
}