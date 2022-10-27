// program ini akan mencari nilai input pada array
#include <stdio.h>

// deklarasi variable
int input_int;
int arr[] = {1, 2, 3, 4, 5};

// deklarasi prosedur
void cari_elemen(int target, int arr_src[], int arr_size);

// deklarasi algoritma
int main()
{
  // meminta masukan dari user
  printf("Masukkan angka yang ingin dicari dalam array: ");
  scanf("%i", &input_int);

  // memanggil prosedur
  cari_elemen(input_int, arr, sizeof(arr) / sizeof(arr[0]));
  return 0;
}

// definisi prosedur
void cari_elemen(int target, int arr_src[], int arr_size)
{
  int idx_pos = -1; // posisi item yang sama, dengan nilai default
  int i;            // index yang digunakan pada loop

  // loop seisi array untuk mencari nilai yang sama
  for (i = 0; i < arr_size; i++)
  {
    // jika nilai sama maka perbarui posisi item
    if (arr_src[i] == target)
    {
      idx_pos = i;
    }
  }

  if (idx_pos == -1)
  {
    printf("Posisi %i dalam array adalah 0\n", target);
  }
  else
  {
    printf("Posisi %i dalam array adalah %i\n", target, idx_pos);
  }
}