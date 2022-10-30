#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

// deklarasi functions
void initDb();
void inputToDb(Motor db[], int index, char name[20], int qty, int harga);
void menuUtama();

// deklarasi global variable
Motor db[8];

int main() {
  // mengisi data default kepada database
  initDb();
	
	// menampilkan menu utama
	menuUtama();
	
	// program hello
	hello();
	
  return 0;
}

/** FUNCTION UTILITY */
void initDb() {
  inputToDb(db, 0, "Revo FI 110", 30, 12500);
  inputToDb(db, 1, "New Supra X 125 FI", 30, 18500);
  inputToDb(db, 2, "New Beat FI", 20, 12000);
  inputToDb(db, 3, "Vega ZR", 10, 13500);
  inputToDb(db, 4, "Jupiter Z", 20, 14000);
  inputToDb(db, 5, "Jupiter MX", 15, 17000);
  inputToDb(db, 6, "Satria FU 150", 10, 19500);
  inputToDb(db, 7, "Shogun R 125", 5, 14000);
}
// memasukkan motor baru ke database
void inputToDb(Motor db[], int index, char name[20], int qty, int harga) {
  Motor motor;
  strcpy(motor.nama, name);
  motor.qty = qty;
  motor.harga = harga;

  db[index] = motor;
}
/** AKHIR FUNCTION UTILITY */

/** FUNCTION TAMPILAN */
void menuUtama() {
	system("cls");
	
  printf("PT XYZ. Makmur Sejahtera\n");
  printf("Masukkan Menu");
	
	
}
/** AKHIR FUNCTION TAMPILAN */
