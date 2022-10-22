// Program ini akan menguji apakah sebuah bilangan bulat merupakan bilangan prima atau bukan
#include <stdio.h>

// deklarasi variable
int angka, i;

// deklarasi algoritma
int main() {
  // meminta masukan kepada user
  printf("Masukkan Angka: ");
  scanf("%i", &angka);

  // pengecekan 1
  if (angka <= 1 || (angka % 2 == 0 && angka > 2)) {
    return printf("\nAngka bukan bilangan prima");
  }

  // pengecekan 2
  for (i = 3; i <= sqrt(angka) + 1; i++) {
    if (angka % i == 0) {
      return printf("\nAngka bukan bilangan prima");
    }
  }
  
  printf("\nAngka adalah bilangan prima");
  return 0;
}





