// Program Bangun Datar
#include <stdio.h>
#include <stdlib.h> // pustaka standard lib c/c++    
#include <math.h>   // pustaka proses aritmarika
#include <string.h> // pustaka proses olah string
#include <conio.h>  // pustaka untuk proses tamabahan olah string

// Deklarasi Variabel 
int menu;       // Variabel untuk melakukan proses pemilihan menu
char ulangi[1]; // Variabel untuk melakukan proses perulangan

float sisi;     // Variabel untuk masukan program
float panjang;  // Variabel untuk masukan program
float lebar;    // Variabel untuk masukan program
float luas;     // Variabel untuk keluaran program
float keliling; // Variabel untuk keluaran program

// Deklarasi Algoritma 
int main() {
  do { 
    system("cls");

    // menu utama
    printf("\nProgram bangun datar");
    printf("\nPersegi (1)");
    printf("\nPersegi Panjang (2)");
    printf("\nLingkaran (3)");
    printf("\nSegitiga (4)");
    printf("\nKeluar (5)");
    printf("\nMasukkan menu (1/2/3/4/5): ");
    scanf("%i", &menu);

    switch (menu) {
      case 1:
        printf("Menu 1");
        break;
      
      case 2:
        printf("Menu 2");
        break;
      
      case 3:
        printf("Menu 3");
        break;
      
      case 4:
        printf("Menu 4");
        break;
      
      case 5:
        printf("Terima Kasih");
        break;
      
      default:
        printf("Pilihan Menu Salah");
        break;
    }
  } while (menu <= 0 || menu > 5);

  return 0;
}