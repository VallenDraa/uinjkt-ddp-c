// program ini berisi fungsi yang mengembalikan sebuah
#include <stdio.h>
#include <string.h>

// deklarasi variable
int start_cut_idx, end_cut_idx;

// deklarasi prosedur
void cut_str(char str[], int start_idx, int end_idx);

// deklarasi algoritma
int main()
{
  // meminta masukan string ke user
  int arr_len;
  printf("Masukkan panjang string: ");
  scanf("%i", &arr_len);

  // membuat string baru
  char str[arr_len + 1];

  // meminta user untuk memasukan input string baru
  printf("Masukkan sebuah string: ");
  fflush(stdin);
  gets(str);

  // memasukan titik awal pemotongan string
  printf("Masukkan index titik awal pemotongan string: ");
  scanf("%i", &start_cut_idx);
  printf("Masukkan index titik akhir pemotongan string: ");
  scanf("%i", &end_cut_idx);

  cut_str(str, start_cut_idx, end_cut_idx);
  return 0;
}

// definisi prosedur
void cut_str(char str[], int start_idx, int end_idx)
{
  int str_len = sizeof(str) / sizeof(str[0]);

  // validasi terhadap input index mulai dan index akhir potongan string
  if (start_idx > str_len - 1 || (end_idx > str_len - start_idx))
  {
    printf("%s", "");
  }
  else
  {
    // loop untuk mencetak hasil potongan
    for (int i = start_idx; i < end_idx; i++)
    {
      printf("%c", str[i]);
    }
  }
}