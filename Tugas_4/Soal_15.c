// PROGRAM untuk menggeser item pada array secara sirkuler
#include <stdio.h>

// DEKLARASI variable
int arr_len, i;

// ALGORITMA
int main()
{
  // meminta masukan dari user
  printf("masukan panjang array: ");
  scanf("%i", &arr_len);

  // array dengan ukuran custom dari user
  int custom_arr[arr_len];

  for (i = 0; i < arr_len; i++)
  {
    printf("masukan nilai array ke-%i : ", i);
    scanf("%i", &custom_arr[i]);
  }

  // untuk mendeklarasi nilai akhir pada array
  int temp = custom_arr[arr_len - 1];

  for (i = arr_len - 1; i >= 0; i--)
  {
    // mengganti posisi item pada array
    if (i != 0)
    {
      custom_arr[i] = custom_arr[i - 1];
    }
    else
    {
      custom_arr[i] = temp;
    }
  }

  // mencetakan hasil penukaran item pada array
  for (i = 0; i < arr_len; i++)
  {
    printf("%i ", custom_arr[i]);
  }

  return 0;
}