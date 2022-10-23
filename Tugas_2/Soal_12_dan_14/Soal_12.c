/*
  gcc Penghitung_beda_hari.c Soal_12.c -o Soal_12
  Program ini akan menghitung perbedaan hari antara dua tanggal. 
  Program ini harus berada di folder yang sama dengan penghitung_beda_hari.c !
*/ 

//DEKLARASI PUSTAKA
#include <stdio.h>
#include <math.h>
/*
  Kode yang akan digunakan dari penghitung_beda_hari.h: 
    Struct (Date)
    Fungsi (hitung_perbedaan_hari, menu_input_tanggal)
*/
#include "penghitung_beda_hari.h"

int main() {
  
  // DEKLARASI VARIABLE
  Date date_1, date_2;

  // Meminta user untuk menginput data
  printf("\nData untuk Start Date\n");
  menu_input_tanggal(&date_1.hari, &date_1.bulan, &date_1.tahun);

  // ulang selama memenuhi pelanggaran
  do {
    printf("\nStart Date: %i/%i/%i", date_1.hari, date_1.bulan, date_1.tahun);
    printf("\nData untuk End Date\n");
    menu_input_tanggal(&date_2.hari, &date_2.bulan, &date_2.tahun);
  } while (date_1.tahun > date_2.tahun ||  
          date_1.tahun == date_2.tahun && date_1.bulan > date_2.bulan || 
          date_1.tahun == date_2.tahun && date_1.bulan == date_2.bulan && date_1.hari > date_2.hari); //pelanggaran

  // mencetak perbedaan hari
  printf("\nPerbedaan antara tanggal %i/%i/%i dan %i/%i/%i adalah: %i hari\n", 
        date_1.hari, date_1.bulan, date_1.tahun,
        date_2.hari, date_2.bulan, date_2.tahun,
        hitung_perbedaan_hari(date_1, date_2));

  return 0;
}