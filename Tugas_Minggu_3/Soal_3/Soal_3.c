//Program ini akan mengubah suhu berjenis celcius menjadi farenheit, reamur, atau kelvin

// DEKLARASI PUSTAKA
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// DEKLARASI GLOBAL VARIABLE
double celcius, hasil;
char opsiKonversi;

// DEKLARASI ALGORTIMA
int main() {
  while (true) {
    // memasukkan suhu c
    printf("\nMasukkan suhu Celcius untuk dikonversi ke Farenheit, Kelvin, atau Reamur ! ");
    printf("\ninput: ");
    scanf("%lf", &celcius);

    printf("\nPilih opsi konversi ! ");
    printf("\nFarenheit (f)");
    printf("\nKelvin (k)");
    printf("\nReamur (r)");
    printf("\nKeluar dari program (e)");
    printf("\nInput: ");
    scanf(" %c", &opsiKonversi);

    
    if (opsiKonversi == 'f') {
      hasil = (celcius * 9/5) + 32;
      printf("\nHasil Konversi dari %lf°C ke Farenheit adalah: %.2lf°F\n", celcius, hasil);

    } else if (opsiKonversi == 'k') {
      hasil = celcius + 273.15;
      printf("\nHasil Konversi dari %lf°C ke Kelvin adalah: %.2lf°K\n", celcius, hasil);

    } else if (opsiKonversi == 'r') {
      hasil = celcius * 0.8;
      printf("\nHasil Konversi dari %lf°C ke Reamur adalah: %.2lf°R\n", celcius, hasil);

    } else if (opsiKonversi == 'e') {
      printf("\nTerima Kasih telah menggunakan program ini !");

      break;
    } else {
      printf("\nMasukkan tipe konversi yang valid (f/k/r) !");

    }
  }

  return 0;
}