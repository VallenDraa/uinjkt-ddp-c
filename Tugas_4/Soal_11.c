// program ini berisi prosedur untuk menentukan apakah semua isi pada array bernilai sama
#include <stdio.h>
#include <stdbool.h>

// deklarasi variable
int arr[] = {2, 2, 2, 2};

// deklarasi prosedur
void is_all_item_same(int arr[]);

// deklarasi algoritma
int main()
{
  is_all_item_same(arr);

  return 0;
}

// definisi prosedur
void is_all_item_same(int arr[])
{
  int arr_len = sizeof(arr) / sizeof(arr[0]);
  int temp = arr[0]; // penanmpung sementara item pada array
  bool is_all_same = true;

  // meloop seluruh array item
  for (int i = 0; i < arr_len; i++)
  {
    // jika pada iterasi ini nilainya sama maka lanjut ke iterasi berikutnya
    if (temp == arr[i])
      continue;

    is_all_same = false;
    break;
  }

  // menampilkan keluaran berdasarkan variable is_all_same
  is_all_same
      ? printf("Semua elemen pada array sama !")
      : printf("Semua elemen pada array tidak sama !");
}