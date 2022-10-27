/* Program ini akan mencari nilai KPK dari dua variables*/

// DEKLARASI PUSTAKA
#include <stdio.h>

// DEKLARASI VARIABLE
int a, b, KPK = 0;

// DEKLARASI PROCEDURE
void kpk(int a, int b, int *KPK);

// DEKLARASI ALGORTIMA
int main()
{
  // meminta masukan kepada user
  printf("Masukkan bilangan bulat pertama: ");
  scanf("%i", &a);

  printf("Masukkan bilangan bulat kedua : ");
  scanf("%i", &b);

  // memanggil procedure
  kpk(a, b, &KPK);
  return 0;
}

// definisi prosedur
void kpk(int a, int b, int *KPK)
{
  // Hanya akan memiliki kpk jika bilangan a dan b bukan 0
  if (a != 0 && b != 0)
  {
    int nilai_tertinggi = a > b ? a : b;

    for (int i = nilai_tertinggi; i < a * b; i++)
    {
      if (i % a == 0 && i % b == 0)
      {
        *KPK = i;
        break;
      }
    }
  }
  else
  {
    *KPK = 0;
  }

  printf("Hasil KPK dari bilangan %i dan %i adalah %i", a, b, *KPK);
}