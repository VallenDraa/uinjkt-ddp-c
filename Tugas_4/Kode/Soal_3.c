// program untuk mencari nilai terbesar dan nilai terbesar kedua
#include <stdio.h>
#include <stdlib.h>

// deklarasi variable
int i;
int arr_len, biggest, sec_biggest;

// deklarasi algoritma
int main()
{
  // meminta masukan dari user
  printf("Masukan panjang array:");
  scanf("%i", &arr_len);

  // deklarasi array dengan panjang custom
  int custom_arr[arr_len];

  // memasukkan nilai pada setiap index dalam array
  for (i = 1; i <= arr_len; i++)
  {
    printf("nilai item pada index %i : ", i);
    scanf("%i", &custom_arr[i]);
  }

  // nilai default untuk nilai terbesar
  biggest = custom_arr[1];

  // loop seisi array untuk mencari nilai terbesar
  for (i = 2; i <= arr_len; i++)
  {
    if (custom_arr[i] > biggest)
    {
      biggest = custom_arr[i];
    }
  }

  // nilai default untuk nilai terbesar kedua
  sec_biggest = custom_arr[1];

  // loop seisi array untuk mencari nilai terbesar kedua
  for (i = 2; i <= arr_len; i++)
  {
    if (custom_arr[i] > sec_biggest && custom_arr[i] != biggest)
    {
      sec_biggest = custom_arr[i];
    }
  }

  // menampilkan hasil pencarian nilai terbesar dan nukau terkecil
  system("cls");
  printf("Nilai biggest ke 1 adalah %i \n", biggest);
  printf("Nilai biggest ke 2 adalah %i", sec_biggest);
  return 0;
}
