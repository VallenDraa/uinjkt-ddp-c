/* Program ini akan mencetak 5 tingkatan awal dari sebuah segitiga paskal */

// DEKLARASI PUSTAKA
#include <stdio.h>
#include <stdlib.h>

// deklarasi variable
int i, j, k, baris, hitung = 0, count1 = 0;

// deklarasi algoritma
int main()
{
  // meminta masukan dari user
  do
  {
    printf("Masukkan jumlah baris untuk segitiga: ");
    scanf("%i", &baris);
  } while (baris > 10);

  // mencetak segitiga
  system("cls");
  for (i = 1; i <= baris; i++)
  {
    // menecetak spasi dalam segitiga
    for (j = 1; j <= baris - i; j++)
    {
      printf(" ");
      hitung++;
    }

    // mencetak angka
    for (k = 0; k < 2 * i - 1; k++)
    {
      if (hitung <= baris - 1)
      {
        printf("%i", i + k);
        hitung++;
      }
      else
      {
        count1++;
        printf("%i", (i + k - 2 * count1));
      }
    }

    count1 = 0;
    hitung = 0;
    printf("\n");
  }
  return 0;
}
