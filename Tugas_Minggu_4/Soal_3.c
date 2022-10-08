/*
  Program ini menerima 3 bilangan bulat sebagai input 
  dan akan mengeluarkan 3 angka tersebut secara berurutan 
*/ 

//DEKLARASI PUSTAKA
#include <stdio.h>

int main() {
  // DEKLARASI KONSTANTA
  const int PANJANG_ARRAY = 3; //karena input sudah dipastikan ada 3

  // DEKLARASI VARIABLE
  int angka[3];
  int temp; // wadah untuk pertukaran nilai di bubble sort
  
  // meminta user untuk menginput 3 bilangan bulat
  printf("Masukkan 3 bilangan bulat !\n");
  for (int i = 0; i < PANJANG_ARRAY; i++) {
    printf("Masukkan angka ke - %i: ", i + 1);
    scanf("%i", &angka[i]);
  }

  // Melakukan bubble sort untuk mengurutkan angka
  for (int i = 0; i < PANJANG_ARRAY; i++) {
    for (int j = 0; j < PANJANG_ARRAY; j++ ) {
      if (angka[j] > angka[j + 1]) {
        temp = angka[j + 1];
        angka[j + 1] = angka[j];
        angka[j] = temp;
      } 
    }
  }

  // Menampilkan angka yang terutut
  printf("Angka yang terutut\n");
  for (int i = 0; i < PANJANG_ARRAY; i++) {
    printf("%i ", angka[i]);
  }

  return 0;
}