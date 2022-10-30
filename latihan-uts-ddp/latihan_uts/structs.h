#pragma once
#include <stdbool.h>

// deklarasi struct
struct Motor {
  char nama[20];
  int qty;
  long long harga;
};

struct Date {
  int tanggal;
  int bulan;
  int tahun;
};

struct Ktp {
  char NIK[16];
  char nama[120];
  struct Date ttl;
  char kelamin[10];
  char alamat[120];
  char agama[120];
  bool isNikah;
  char pekerjaaan[120];
  char kewarganegaraan[120];
};

struct Pembeli {
  struct Ktp ktp;
  int qty_beli;
  int jumlah_jenis_motor;
  struct Date tgl_pembelian;
};
