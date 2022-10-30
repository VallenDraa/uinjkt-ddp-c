// program ini berisi prosedur untuk menampilkan elemen terkecil larik A
#include <stdio.h>

// deklarasi variable
int arr[] = {2, 10, 5, 20, 50};
int hasil;
int arr_len = sizeof(arr) / sizeof(arr[0]);

// deklarasi prosedur
void print_terkecil(int arr[], int *hasil, int arr_len);

// deklarasi algoritma
int main()
{
  // memanggil prosedur
  print_terkecil(arr, &hasil, arr_len);

  return 0;
}

// definisi prosedur
void print_terkecil(int arr[], int *hasil, int arr_len)
{
  int i;
  *hasil = arr[0];

  for (i = 1; i < arr_len; i++)
  {
    if (*hasil > arr[i])
      *hasil = arr[i];
  }

  // mencetak hasil
  printf("[ ");
  for (i = 0; i < arr_len; i++)
  {
    i == arr_len - 1 ? printf("%i", arr[i]) : printf("%i, ", arr[i]);
  }
  printf(" ]\n");
  printf("Hasil terkecil di array adalah %i", *hasil);
}