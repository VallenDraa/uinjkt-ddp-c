// program ini akan menghitung jarak antara dua titik
#include <stdio.h>

// deklarasi variable
float x1, x2, y1, y2, hasil_jarak;

// deklarasi fungsi
float jarak(float x1, float x2, float y1, float y2);

// deklarasi algoritma
int main()
{
  // meminta masukan dari user
  printf("Masukkan nilai X1 :");
  scanf("%f", &x1);
  printf("Masukkan nilai X2 :");
  scanf("%f", &x2);
  printf("Masukkan nilai Y1 :");
  scanf("%f", &y1);
  printf("Masukkan nilai Y2 :");
  scanf("%f", &y2);

  // proses menghitung hasil jarak
  hasil_jarak = jarak(x1, x2, y1, y2);
  printf("Hasil jarak adalah  %.2f", hasil_jarak);

  return 0;
}

// definisi fungsi
float jarak(float x1, float x2, float y1, float y2)
{
  int hasil = sqrt(((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
  return hasil;
}
