// Program ini akan mengkonversi meter ke dalam satuan inchi, kaki, dan yard
#include <stdio.h>

// deklarasi konstanta (dalam meter)
const float SATU_INCHI = 25.4 / 1000;
const float SATU_KAKI = 30.48 / 100;
const float SATU_YARD = 0.9144;

// deklarasi variable
float input_m;
typedef struct {
  float inchi;
  float kaki;
  float yard;
} Hasil;
Hasil res;

// deklarasi algoritma
int main() {
  // meminta masukan kepada user
  printf("\nMasukkan nilai panjang dalam satuan meter: ");
  scanf("%f", &input_m);

  // proses konversi
  res.inchi = input_m / SATU_INCHI;
  res.kaki = input_m / SATU_KAKI;
  res.yard = input_m / SATU_YARD;

  // menampilkan hasil konversi
  printf("\nHasil Konversi %.2f:\n", input_m);
  printf("%.2f inchi\n", res.inchi);
  printf("%.2f kaki\n", res.kaki);
  printf("%.2f yard\n", res.yard);

  return 0;
}