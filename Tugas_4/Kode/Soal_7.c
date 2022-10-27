// program ini akan menghitung simpangan baku dari sebuah array
#include <stdio.h>
#include <math.h>

// deklarasi variable
int i;
int j;
int arr[] = {150, 167, 175, 157, 165, 153, 177, 160};
int arr_len = sizeof(arr) / sizeof(arr[0]);
int sum = 0;
float rata_rata = 0;   //∑ xi/n
float simpangan_total; // ∑(xi - x̄) ^ 2
float simpangan_baku;

// deklarasi algoritma
int main()
{
  // menambahkan seluruh item pada array
  for (int i = 0; i < arr_len; i++)
  {
    sum = sum + arr[i];
  }

  // menghitung rata-rata
  rata_rata = sum / arr_len;

  // menghitung simpangan total
  for (int i = 0; i < arr_len; i++)
  {
    simpangan_total = simpangan_total + pow(arr[i] - rata_rata, 2);
  }

  // menghitung simpangろan baku
  simpangan_baku = sqrt(simpangan_total / arr_len);
  // mencetak hasil

  printf("Simpangan Baku bernilai: %.2f\n", simpangan_baku);
}
