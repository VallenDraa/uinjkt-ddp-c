/* Program ini akan mengkonversi input integer 0-9 ke bentuk angka romawi */ 

//DEKLARASI PUSTAKA
#include <stdio.h>

int main() {
  // DEKLARASI VARIABLE
  int angka;

  // meminta user untuk menginput angka 0-9
  do {
    printf("\nMasukkan angka antara 0-9: ");
    scanf("%i", &angka);
  } while (angka < 0 || angka > 9);
  
  // melakukan pencetakan angka
  printf("Angka Romawi dari %i adalah: ", angka);  
  while (angka > 0) {
    if (angka < 4) {
      printf("I");
      angka--;
    } else if (angka == 4){
      printf("IV");
      angka -= 4;
    } else if (angka >= 5 && angka <= 8) {
      printf("V");
      angka -= 5;
    } else {
      printf("IX");
      angka -= 9;
    }
  }

  return 0;
}