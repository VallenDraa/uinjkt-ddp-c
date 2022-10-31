// gcc main.c models.c utils.c menus.c -o XYZ
// program ini adalah admin dashboard dari perusahaan xyz

// deklarasi pustaka
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "models.h"
#include "menus.h"

// deklarasi variable
int i, menu_input; // untuk menyimpan iterasi loop
long long modal = 440000, profit = 0;

// deklarasi algoritma
int main() {
  // menampilkan menu utama
  while (true) {
    menu_utama(&menu_input);

    // pengecekan input menu 
    if (menu_input == 1) {
      menu_tambah_pembeli(&modal, &profit);
      menu_input = 0;
    } else if (menu_input == 2) {
      menu_lihat_db_motor(modal, profit);
      menu_input = 0;
    } else if (menu_input == 3) {
      menu_lihat_db_pembeli(profit);
      menu_input = 0;
    } else if (menu_input == 4) {
      system("cls");
      printf("Terima Kasih Telah Menggunakan Program Ini !");
      break;
    }
  }
  return 0;
}

