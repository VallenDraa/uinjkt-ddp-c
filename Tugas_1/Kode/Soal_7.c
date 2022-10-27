// Program ini akan mengkonversi meter ke dalam satuan inchi, kaki, dan yard
#include <stdio.h>
#include <math.h>

// deklarasi variable
float input_tinggi, bb_ideal;

// deklarasi algoritma
int main()
{
  // meminta masukan kepada user
  printf("\nMasukkan tinggi badan anda: ");
  scanf("%f", &input_tinggi);

  // proses perhitungan berat ideal
  bb_ideal = abs((input_tinggi - 100) - (input_tinggi - 100) * 0.1);

  // menampilkan hasil konversi
  printf("\nBerat badan ideal untuk tinggi %.2f cm adalah %.2f kg", input_tinggi, bb_ideal);
  return 0;
}