// Program ini akan membaca uang dalama kelipatan Rp.25 dan menentukan berapa nilai tukaran pecahan
#include <stdio.h>

// deklarasi variable
const int PECAHAN[5] = { 1000, 500, 100, 50, 25 }; 
long long input_uang;
enum Pecahan { seribu, lima_ratus, seratus, lima_puluh, dua_lima };
int res[] = { 0, 0, 0, 0, 0 }; 
int i;

// deklarasi algoritma
int main() {
  // meminta masukan kepada user
  printf("\nMasukkan nilai uang berkelipatan 25: ");
  scanf("%lli", &input_uang);
  printf("\nHasil Pecahan dari Rp.%i: \n", input_uang);

  // proses penentuan tukaran kelipatan
  for (i = 0; i < 5; i++) {
    while (input_uang >= PECAHAN[i]) {
      res[i] += 1;
      input_uang -= PECAHAN[i];
    }
  }
  
  // menampilkan hasil konversi
  printf("Rp.1000: %i\n", res[seribu]);
  printf("Rp.500: %i\n", res[lima_ratus]);
  printf("Rp.100: %i\n", res[seratus]);
  printf("Rp.50: %i\n", res[lima_puluh]);
  printf("Rp.25: %i\n", res[dua_lima]);

  return 0;
}