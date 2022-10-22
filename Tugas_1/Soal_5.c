// Program ini akan mengkonversi cm ke m dan km
#include <stdio.h>

// deklarasi variable
long long input_cm;
typedef struct {
  long long cm;
  long long m;
  long long km;
} Hasil;
Hasil res;

// deklarasi algoritma
int main() {
  // meminta masukan kepada user
  printf("\nMasukkan nilai panjang dalam satuan cm: ");
  scanf("%lli", &input_cm);
  printf("\n%lli cm = ", input_cm);

  // proses konversi
  while (input_cm >= 100000) {
    input_cm -= 100000;
    res.km += 1;
  }

  while (input_cm >= 100) {
    input_cm -= 100;
    res.m += 1;
  }

  res.cm = input_cm;

  // menampilkan hasil konversi
  printf("%lli km + ", res.km);
  printf("%lli m + ", res.m);
  printf("%lli cm", res.cm);

  return 0;
}