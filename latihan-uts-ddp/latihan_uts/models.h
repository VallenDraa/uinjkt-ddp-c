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
} Ktp;

typedef struct {
  Ktp ktp;
  int qty_beli;
  int jumlah_jenis_motor;
  Date tgl_pembelian;
} Pembeli;
