// Program ini akan menukar nilai pada array arr_1 dan arr_2
#include <stdio.h>

// Deklarasi variabel
int arr_1[] = {16, 23, 55, 23, 23, 11, 3};
int arr_2[] = {6, 98, 45, 5, 87, 3, 3};

// prosedur
void print_arr(int arr[], int arr_len);
void tukar_elemen(int i);

int main()
{
  printf("sebelum ditukar: \n");
  print_arr(arr_1, sizeof(arr_1) / sizeof(arr_1[0]));
  printf("\n");
  print_arr(arr_2, sizeof(arr_2) / sizeof(arr_2[0]));

  tukar_elemen(6);

  printf("\nsesudah ditukar: \n");
  print_arr(arr_1, sizeof(arr_1) / sizeof(arr_1[0]));
  printf("\n");
  print_arr(arr_2, sizeof(arr_2) / sizeof(arr_2[0]));
  printf("\n");

  return 0;
}

// definisi prosedur
void print_arr(int arr[], int arr_len)
{
  int i;

  printf("[ ");
  for (i = 0; i < arr_len; i++)
  {
    if (i == arr_len - 1)
    {
      printf("%i", arr[i]);
    }
    else
    {
      printf("%i, ", arr[i]);
    }
  }
  printf(" ]");
}

void tukar_elemen(int arr_len)
{
  // deklarasi variable untuk memebantu proses penukaran

  int i, temp;
  // proses menukar isi antara 2 array
  for (i = 0; i < arr_len; i++)
  {
    temp = arr_1[i];
    arr_1[i] = arr_2[i];
    arr_2[i] = temp;
  }
}