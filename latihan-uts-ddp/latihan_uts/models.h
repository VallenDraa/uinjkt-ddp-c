#pragma once
#include <stdbool.h>

// deklarasi struct
typedef struct {
  char nama[20];
  int qty;
  long long harga;
} Motor;

typedef struct {
  int hari;
  int bulan;
  int tahun;
} Date;

typedef struct {
  char NIK[16];
  char nama[120];
  Date tgl_lhr;
  char kelamin;
  char alamat[120];
  char agama[120];
  char isNikah;
  char pekerjaaan[120];
  char kewarganegaraan[120];
  int qty_beli;
  int jenis_motor;
  Date tgl_pembelian;
} Pembeli;

// inisialisasi database
extern Motor db_motor[8];
extern Pembeli db_pembeli[200];
extern int curr_pembeli_idx;
