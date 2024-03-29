// program ini berisi prosedur untuk menampilkan elemen terbesar larik A
#include <stdio.h>

// deklarasi variable
int arr[] = {2, 10, 5, 20, 50};
int hasil, i;

// deklarasi prosedur
void print_terbesar(int arr[], int *hasil, int arr_len);

// deklarasi algoritma
int main()
{
  // memanggil prosedur
  print_terbesar(arr, &hasil, sizeof(arr) / sizeof(arr[0]));

  return 0;
}

// definisi prosedur
void print_terbesar(int arr[], int *hasil, int arr_len)
{
  *hasil = arr[0];

  for (i = 1; i < arr_len; i++)
  {
    if (arr[i] > *hasil)
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