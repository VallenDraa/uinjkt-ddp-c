// program ini berisikan prosedur untuk mencari nilai input terkecil
#include <stdio.h>

// deklrasi variable
int i, jumlah_iterasi = 1;
int terkecil = NULL, arr_angka[100], input_angka;
int arr_len = sizeof(arr_angka) / sizeof(arr_angka[0]);

// mencetak N buah bilangan genap pertama
void is_input_terkeil(int current, int new);

int main()
{
  while (1)
  {
    // melakukan pengecekan kode keluar program
    if (input_angka == 9999)
    {
      break;
    }

    for (i = 0; i < arr_len; i++)
    {
      // Meminta masukan dari user
      printf("Masukkan angka ke - %i [ketik 9999 untuk mengakhiri program]: ", i + 1);
      scanf("%i", &input_angka);

      // pengecekan nilai terkecil
      is_input_terkecil(&terkecil, input_angka);

      // melakukan pengecekan kode keluar program
      if (input_angka == 9999)
      {
        break;
      }

      // memasukkan input-an angka ke dalam array jika input bukan 9999
      arr_angka[i] = input_angka;
      jumlah_iterasi += 1;
    }
  }

  // mencetak nilai terkecil
  printf("\nNilai terkecil dari seluruh input adalah: %i", terkecil);

  return 0;
}

// Definisi Prosedur
void is_input_terkecil(int *terkecil, int input_angka)
{
  if (*terkecil == NULL)
  {
    *terkecil = input_angka;
  }
  else
  {
    if (*terkecil > input_angka)
    {
      *terkecil = input_angka;
    }
  }
}