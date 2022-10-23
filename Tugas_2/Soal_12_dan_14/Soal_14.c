/*
  gcc Penghitung_beda_hari.c Soal_14.c -o Soal_14
  Program ini akan menentukan harga tiket penumpang maskapai penerbangan.
  umur menjadi faktor untuk mendapatkan diskon. 
  
  Program ini harus berada di folder yang sama dengan penghitung_beda_hari.c !
*/ 

//DEKLARASI PUSTAKA
#include <stdio.h>
#include <time.h>
/*
  Kode yang akan digunakan dari penghitung_beda_hari.h: 
    Struct (Date)
    Fungsi (hitung_perbedaan_hari, menu_input_tanggal)
*/
#include "penghitung_beda_hari.h"

// DEKLARASI STRUCT
typedef struct {
  char nama_penumpang[200];
  Date dob; // tanggal lahir atau date of birth
  char tujuan[200];
  Date keberangkatan;
  float harga_tiket;
} Tiket;
  

int main() {
  // DEKLARASI KONSTANTA
  const float HARGA_NORMAL = 200.00;

  // DEKLARASI VARIABLE
  Tiket tiket;
  float umur, diskon;

  // Meminta masukkan berupa data tiket dari user
  printf("Pembuatan Tiket Penerbangan !");
 
  printf("\nMasukkan nama anda: ");
  fflush(stdin);
  gets(tiket.nama_penumpang);

  printf("\nMasukkan tanggal lahir anda !\n");
  menu_input_tanggal(&tiket.dob.hari, &tiket.dob.bulan, &tiket.dob.tahun);

  printf("\nMasukkan tujuan penerbangan anda: ");
  fflush(stdin);
  gets(tiket.tujuan);

  do {
    printf("\nMasukkan tanggal keberangkatan anda !\n");
    menu_input_tanggal(&tiket.keberangkatan.hari, &tiket.keberangkatan.bulan, &tiket.keberangkatan.tahun);
  } while (tiket.dob.tahun > tiket.keberangkatan.tahun ||  
          tiket.dob.tahun == tiket.keberangkatan.tahun && tiket.dob.bulan > tiket.keberangkatan.bulan || 
          tiket.dob.tahun == tiket.keberangkatan.tahun && tiket.dob.bulan == tiket.keberangkatan.bulan && tiket.dob.hari > tiket.keberangkatan.hari); //pelanggaran

  // hitung umur penumpang
  umur = hitung_perbedaan_hari(tiket.dob, tiket.keberangkatan) / 365;
  if (umur < 12) {
    diskon = HARGA_NORMAL * 0.25;
    tiket.harga_tiket = HARGA_NORMAL - diskon;
  } else {
    tiket.harga_tiket = HARGA_NORMAL;
  }

  // Menampilkan hasil akhir
  printf("TIKET PENERBANGAN ANDA\n");
  printf("\nNama                                     : %s", tiket.nama_penumpang);
  printf("\nTanggal Lahir                            : %i/%i/%i", tiket.dob.hari, tiket.dob.bulan, tiket.dob.tahun);
  printf("\nTujuan                                   : %s", tiket.tujuan);
  printf("\nTanggal Keberangkatan                    : %i/%i/%i", tiket.keberangkatan.hari, tiket.keberangkatan.bulan, tiket.keberangkatan.tahun);
  printf("\nHarga Normal                             : Rp.%.2f", HARGA_NORMAL);
  printf("\nDiskon (umur < 12 tahun, Anda %.0f tahun) : Rp.%.2f", umur, diskon);
  printf("\nHarga Akhir                              : Rp.%.2f", tiket.harga_tiket);

  return 0;
}