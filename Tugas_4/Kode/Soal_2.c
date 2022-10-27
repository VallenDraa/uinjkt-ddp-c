// Program untuk menentukan range nilai di dalam larik
#include <stdio.h>
#include <stdlib.h>

// deklarasi variable
int arr_len, i, s;
int terbesar, terkecil, range;

// deklarasi algoritma
int main()
{
  // meminta input dari user
  printf("Masukan panjang array:");
  scanf("%i", &arr_len);

  // membuat array
  int custom_arr[arr_len];

  // memasukkan nilai pada setiap index dalam array
  for (i = 0; i < arr_len; i++)
  {
    printf("nilai item pada index %i : ", i);
    scanf("%i", &custom_arr[i]);
  }

  // mengisi nilai default untuk nilai terbesar dan terkecil
  terbesar = custom_arr[0];
  terkecil = custom_arr[0];

  // meloop seisi array untuk mencari nilai terbesar dan terkecil
  for (i = 0; i < arr_len; i++)
  {
    if (custom_arr[i] > terbesar)
    {
      terbesar = custom_arr[i];
    }
    if (custom_arr[i] < terkecil)
    {
      terkecil = custom_arr[i];
    }
  }

  // menghitung range dan menampilkan hasilnya
  range = terbesar - terkecil;
  system("cls");
  printf("\n range nilai di dalam larik adalah %i :", range);
  return 0;
}
