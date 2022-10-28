// program ini berisi prosedur untuk menampilkan elemen-elemen larik A yang lebih kecil dari elemen terkecilnya
#include <stdio.h>

// deklarasi variable
int arr_1[] = {2, 4, 6, 8};
int arr_2[] = {2, 3, 4, 5, 6};
int hasil;

// deklarasi prosedur
void print_median(int arr[], int *hasil, int arr_len);

// deklarasi algoritma
int main()
{
  print_median(arr_1, &hasil, sizeof(arr_1) / sizeof(arr_1[0]));
  print_median(arr_2, &hasil, sizeof(arr_2) / sizeof(arr_2[0]));

  return 0;
}

// definisi prosedur
void print_median(int arr[], int *hasil, int arr_len)
{
  int i;

  // validasi panjang array untuk mengekesuki rumus yang berbeda
  *hasil = arr_len % 2 == 0
               ? (arr[(arr_len - 1) / 2] + arr[arr_len / 2]) / 2
               : arr[arr_len / 2];

  printf("[ ");
  for (i = 0; i < arr_len; i++)
  {
    i == arr_len - 1 ? printf("%i", arr[i]) : printf("%i, ", arr[i]);
  }
  printf(" ]\n");

  printf("Median dari array adalah %i\n", *hasil);
}