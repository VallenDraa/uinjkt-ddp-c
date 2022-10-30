#pragma once

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

