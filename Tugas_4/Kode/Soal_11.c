// program ini berisi prosedur untuk menentukan apakah semua isi pada array bernilai sama
#include <stdio.h>
#include <stdbool.h>

// deklarasi variable
int arr_1[] = {2, 2, 2, 2};
int arr_2[] = {2, 4, 2, 2};

// deklarasi prosedur
void is_all_item_same(int arr[], int arr_len);

// deklarasi algoritma
int main()
{
  is_all_item_same(arr_1, sizeof(arr_1) / sizeof(arr_1[0]));
  is_all_item_same(arr_2, sizeof(arr_2) / sizeof(arr_2[0]));

  return 0;
}

// definisi prosedur
void is_all_item_same(int arr[], int arr_len)
{
  int i;
  int temp = arr[0]; // penanmpung sementara item pada array
  bool is_all_same = true;

  // meloop seluruh array item
  for (i = 0; i < arr_len; i++)
  {
    // jika pada iterasi ini nilainya sama maka lanjut ke iterasi berikutnya
    if (temp == arr[i])
      continue;

    is_all_same = false;
    break;
  }

  // menampilkan array
  printf("[ ");
  for (i = 0; i < arr_len; i++)
  {
    i == arr_len - 1 ? printf("%i", arr[i]) : printf("%i, ", arr[i]);
  }
  printf(" ]\n");

  // menampilkan keluaran berdasarkan variable is_all_same
  is_all_same
      ? printf("Semua elemen pada array sama !\n")
      : printf("Semua elemen pada array tidak sama !\n");
}