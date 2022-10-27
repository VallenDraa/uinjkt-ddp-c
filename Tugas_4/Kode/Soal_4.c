// program untuk mencari nilai terkecil pada array
#include <stdio.h>

// deklarasi variable
int arr_len, i, nilai_terkecil;

// ALGORITMA
int main()
{
  // meminta masukan dari user
  printf("Masukan panjang array:");
  scanf("%i", &arr_len);

  // membuat array dengan panjang custom
  int arr[arr_len];

  // meminta user untuk menginput seluruh nilai pada array
  for (i = 0; i < arr_len; i++)
  {
    printf("nilai item pada index %i: ", i);
    scanf("%i", &arr[i]);
  }

  // mengisi nilai defaukt untuk nilai terkecil
  nilai_terkecil = arr[1];

  // meloop seisi array untuk mencari nilai terkecil
  for (i = 0; i < arr_len; i++)
  {
    // pengecekan nilai saat ini lebih kecil dari sebelumnya
    if (arr[i] < nilai_terkecil)
      nilai_terkecil = arr[i];
  }

  // mecetak hasil nilai terkecil
  printf("Nilai terkecil pada array adalah %i", nilai_terkecil);
  return 0;
}
