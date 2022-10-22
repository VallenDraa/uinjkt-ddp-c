#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// deklarasi struct
typedef struct {
  char nama[20];
  int qty;
  int harga;
} Motor;

typedef struct {
  int tanggal;
  int bulan;
  int tahun;
} Date;

typedef struct {
  char NIK[16];
  char nama[120];
  Date ttl;
  char kelamin[10];
  char alamat[120];
  char agama[120];
  bool isNikah;
  char pekerjaaan[120];
  char kewarganegaraan[120];
} Ktp;

typedef struct {
  Ktp ktp;
  int qty_beli;
  int jumlah_jenis_motor;
  Date tgl_pembelian;
} Pembeli;

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