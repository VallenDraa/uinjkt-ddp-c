// Deklarasi Pustaka
#include <stdio.h>
#include <math.h>

// Deklarasi Variable
int m,  // bil 1 
    n,  // bil 2
    r;  // sisa bagi

// Deklarasi Algoritma
int main() {
  // masukan program
  printf("Masukkan bilangan pertama: ");
  scanf("%i", &m);
  printf("Masukkan bilangan kedua: ");
  scanf("%i", &n);

  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }
  
  printf("Hasil FPB adalah %i", m);

  return 0;
}