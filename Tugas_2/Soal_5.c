/* Program ini akan mengkonversi angka 0-9 berbentuk char menjadi int */ 

//DEKLARASI PUSTAKA
#include <stdio.h>

int main() {
  // DEKLARASI VARIABLE 
  char input;
  int hasil;
  
  // Meminta user untuk memasukkan angka 0-9
  printf("\nPilih salah satu angka [0-9]");
  printf("\nJika jumlah digit >1 maka hanya digit pertama yang akan diterima! ");
  printf("\nInput: ");
  scanf("%c", &input);

  // Menentukan hasil berdasarkan nilai kebenaran input berada di interval kode ASCII 48 - 57
  hasil = input >= 48 && input <= 57 ? input - '0' : -1;
  printf("\nHasil konversi dari tipe data char ke int: %i", hasil);
  
  return 0;
}