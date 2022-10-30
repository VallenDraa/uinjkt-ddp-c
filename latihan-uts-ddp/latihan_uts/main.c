// gcc main.c models.c utils.c menus.c -o XYZ
// program ini adalah admin dashboard dari perusahaan xyz

// deklarasi pustaka
#define DB_MOTOR_LEN 8;
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "models.h"
#include "menus.h"

// deklarasi konstanta

// deklarasi variable
int i, menu_input; // untuk menyimpan iterasi loop
long long modal;

// deklarasi variable database
Motor db_motor[] = {
  {"Revo FI 110", 30, 12500}, {"New Supra X 125 FI", 30, 18500}, 
  {"New Beat FI", 20, 12000}, {"Vega ZR", 10, 13500}, {"Jupiter Z", 20, 14000}, 
  {"Jupiter MX", 15, 17000}, {"Satria FU 150", 10, 19500}, {"Shogun R 125", 5, 14000}
}; // database motor
Pembeli db_pembeli[200]; //variable untuk menyimpan pembeli

// deklarasi algoritma
int main() {
  // menampilkan menu utama
  do {
    menu_utama(&menu_input);

    // pengecekan input menu 
    if (menu_input == 1) {
      menu_tambah_pembeli(db_motor);
      break;
    } else if (menu_input == 2) {
      menu_lihat_db(db_motor);
      break;
    } else if (menu_input == 3) {
      system("cls");
      printf("Terima Kasih Telah Menggunakan Program Ini !");
      break;
    }
  } while (menu_input != 1 && menu_input != 2 && menu_input != 3);
  return 0;
}

