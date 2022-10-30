// Program ini akan menampilkan semua sousi bilangan bulat tidak negatif dari persamaan X + Y + Z = 25
#include <stdio.h>

// deklarasi variable
int i, j, k;

// deklarasi algoritma
int main() {
  // mengulang 3 nested for loop untuk mendapatkan semua kemungkinan penambahan
  for (i = 0; i < 25; i++) {
    for (j = 0; j < 25; j++) {
      for (k = 0; k < 25; k++) {
        if (i + j + k  == 25) printf("%i + %i + %i = 25\n", i, j, k);          
      }
    }
  }

  return 0;
}

