// program untuk mencari nilai modus atau nilai terbanyak dalam array
#include <stdio.h>

// deklarasi variable
int i, j, b = 0;

// Array terdefinisi
int arr[] = {1, 2, 2, 3, 2, 3, 3};
int arr_len = sizeof(arr) / sizeof(arr[0]);
int arr_item_sum = 0;

// deklarasi algoritma
int main()
{
  int hasil_modus = arr[0];

  // proses perhitungan modus
  for (i = 0; i < arr_len; i++)
  {
    // proses perulangan sebanyak arr_len
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
      // proses apakah banyaknya nilai yang sekarang sama dengan banyaknya nilai yang sebelumnya?
      else if (arr_item_sum == b)
      {
        // proses apakah nilai arr dengan index i lebih besar dari nilai hasil_modus
        if (arr[i] > hasil_modus)
        {
          // proses mendeklarasi nilai hasil
          b = arr_item_sum;
          hasil_modus = arr[i];
        }
      }
    }
  }

  // mencetak hasil moduss
  printf("%i", hasil_modus);

  return 0;
}