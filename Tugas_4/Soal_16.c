// PROGRAM untuk mencari nilai modus atau nilai terbanyak dalam array
#include <stdio.h>

// DEKLARASI variable
int i, j, b = 0;

// Array terdefinisi
int arr[] = {1, 2, 2, 3, 2, 3, 3};
int arr_len = sizeof(arr) / sizeof(arr[0]);
int arr_item_sum = 0;

// ALGORITMA
int main()
{
  int hasil_modus = arr[0];

  // proses perhitungan modus
  for (i = 0; i < arr_len; i++)
  {
    // PROSES perulangan sebanyak arr_len
    for (j = 0; j < arr_len; j++)
    {
      if (arr[i] == arr[j])
      {
        arr_item_sum++;
      }

      if (arr_item_sum > b)
      {
        hasil_modus = arr[i];
        b = arr_item_sum;
      }
      // PROSES apakah banyaknya nilai yang sekarang sama dengan banyaknya nilai yang sebelumnya?
      else if (arr_item_sum == b)
      {
        // PROSES apakah nilai arr dengan index i lebih besar dari nilai hasil_modus
        if (arr[i] > hasil_modus)
        {
          // PROSES mendeklarasi nilai hasil
          b = arr_item_sum;
          hasil_modus = arr[i];
        }
      }
    }
  }

  // mencetak hasil moduss
  printf("%i\a", hasil_modus);
}