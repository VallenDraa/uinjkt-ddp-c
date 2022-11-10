// file ini berisi kode yang berkaitan dengan tampilan
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "models.h"
#include "menus.h"
#include "utils.h"

// definisi prosedur dan fungsi tampilan
void tabel_db_motor() {
  int i;
  printf("STOK MOTOR PT.XYZ\n");
  printf("========================\n");
  printf("+----+-------------------+-----+-----------------+\n");
  printf("| No |    Jenis Motor    | QTY |      Harga      |\n");
  printf("+----+-------------------+-----+-----------------+\n");
  // meloop seisi array untuk menampilakan data motor 
  for (i = 0; i < 8; i++) {
    printf("| %i. | %-18s | %-3d | \tRp.%lli |\n", i + 1, db_motor[i].nama, db_motor[i].qty, db_motor[i].harga);
  }
  printf("+----+-------------------+-----+-----------------+");
}

void tabel_pembeli(long long profit) {
  int i;

	printf("NOTA PEMBELIAN PT.XYZ\n");
  printf("========================\n");
  printf("+----+--------------+---------------+-------------------+-----+---------------+\n");
  printf("| No |    Pembeli   | Tgl Pembelian |    Jenis Motor    | QTY |     Harga     |\n");
  printf("+----+--------------+---------------+-------------------+-----+---------------+\n");
  
  if (curr_pembeli_idx == 0) {
    printf("| %2d | %-12s | %-13s | %-17s | %-3s | %-12s  |\n", 1, "--", "--", "--", "--", "--");
  } else {
    for (i = 0; i < curr_pembeli_idx; i++) {
      printf("| %2i | %-12s | %i/%i/%i | %-17s | %-3i | Rp. %-7llirb |\n",
      i + 1, db_pembeli[i].nama, db_pembeli[i].tgl_pembelian.hari, 
      db_pembeli[i].tgl_pembelian.bulan, db_pembeli[i].tgl_pembelian.tahun, db_motor[db_pembeli[i].jenis_motor].nama, 
      db_motor[db_pembeli[i].jenis_motor].qty,  db_motor[db_pembeli[i].jenis_motor].harga);
    }
  }
  printf("+----+--------------+---------------+-------------------+-----+---------------+\n");
  printf("|                            Total                            | Rp. %-7d |\n", profit);
  printf("+----+--------------+---------------+-------------------+-----+---------------+\n");
}

void menu_tambah_pembeli(long long *modal, long long *profit) {
  system("cls");
  int i, jumlah_jenis_motor, stok_mtr;
  char date_str[12]; // string untuk menampung tanggal lahir

  // MENGINPUT DATA KTP
  printf("INPUT DATA KTP !\n");
  get_str("Masukkan nama: ", db_pembeli[curr_pembeli_idx].nama);
  get_str("Masukkan alamat: ", db_pembeli[curr_pembeli_idx].alamat);
  get_str("Masukkan agama: ", db_pembeli[curr_pembeli_idx].agama);
  get_str("Masukkan pekerjaaan: ", db_pembeli[curr_pembeli_idx].pekerjaaan);
  get_str("Masukkan kewarganegaraan: ", db_pembeli[curr_pembeli_idx].kewarganegaraan);
  
  do {
    get_str("Masukkan NIK (16 digit): ", db_pembeli[curr_pembeli_idx].NIK);
  } while (strlen(db_pembeli[curr_pembeli_idx].NIK) != 16);
  do {
    get_str("Masukkan Tanggal Lahir (dd/mm/yyyy): ", date_str);
  } while (!parse_date(date_str, &db_pembeli[curr_pembeli_idx].tgl_lhr));
  do {
    get_char("Apakah sudah menikah (y/n): ", &db_pembeli[curr_pembeli_idx].isNikah);
  } while (tolower(db_pembeli[curr_pembeli_idx].isNikah) != 'y' && tolower(db_pembeli[curr_pembeli_idx].isNikah) != 'n');
  do {
    get_char("Masukkan kelamin (p/w): ", &db_pembeli[curr_pembeli_idx].kelamin);
  } while (tolower(db_pembeli[curr_pembeli_idx].kelamin) != 'p' && tolower(db_pembeli[curr_pembeli_idx].kelamin) != 'w');
  // AKHIR MENGINPUT DATA KTP


  // MENGINPUT DATA PEMBELIAN
  do {
    system("cls");
    printf("INPUT DATA PEMBELIAN !\n");
    get_int("Jumlah jenis motor yang diinginkan (maks. 8): ", &jumlah_jenis_motor);
  } while (jumlah_jenis_motor > 8 || jumlah_jenis_motor <= 0);

  for (i = 0; i < jumlah_jenis_motor; i++) {
    system("cls");
    tabel_db_motor();

    do {
      printf("\nMasukan jenis motor ke-%i dari %i yang ingin dibeli: ", i + 1, jumlah_jenis_motor);
      get_int("", &db_pembeli[curr_pembeli_idx].jenis_motor);
    } while (db_pembeli[curr_pembeli_idx].jenis_motor <= 0 || db_pembeli[curr_pembeli_idx].jenis_motor > 8);

    // meminta user untuk memasukan jumlah pembelian motor
    do {
      stok_mtr = db_motor[db_pembeli[curr_pembeli_idx].jenis_motor - 1].qty;

      printf("Pilihan anda adalah %s\n", db_motor[db_pembeli[curr_pembeli_idx].jenis_motor - 1].nama);
      printf("Masukkan jumlah beli (maks.%i): ",  stok_mtr);
      get_int("", &db_pembeli[curr_pembeli_idx].qty_beli);
    } while (db_pembeli[curr_pembeli_idx].qty_beli < 0  || db_pembeli[curr_pembeli_idx].qty_beli > stok_mtr);

    // memodifikasi stok motor dalam database
    db_motor[db_pembeli[curr_pembeli_idx].jenis_motor - 1].qty -= db_pembeli[curr_pembeli_idx].qty_beli;
    *profit += db_motor[db_pembeli[curr_pembeli_idx].jenis_motor - 1].harga * db_pembeli[curr_pembeli_idx].qty_beli; 
    *modal += db_motor[db_pembeli[curr_pembeli_idx].jenis_motor - 1].harga * db_pembeli[curr_pembeli_idx].qty_beli; 

    curr_pembeli_idx++;
  }
  
  system("cls");
  printf("%i data baru berhasil ditambah ke dalam database !\n", jumlah_jenis_motor);
  printf("\nTekan Apa Saja Untuk Kembali Ke Menu !");
  getche();
  // AKHIR MENGINPUT DATA PEMBELIAN
}

void menu_lihat_db_motor(long long modal, long long profit) {
  system("cls");
  tabel_db_motor();
  printf("\n\nKEUANGAN PT.XYZ\n");
  printf("========================\n");
  printf("Modal awal: Rp. 440000\n");
  printf("Profit: Rp. %lli\n", profit);
  printf("Total: Rp. %lli\n", modal);
  printf("========================\n");
  printf("\nTekan Apa Saja Untuk Kembali Ke Menu !");
  getche();
}

void menu_lihat_db_pembeli(long long profit) {
  int target_idx;

  system("cls");
  tabel_pembeli(profit);

  if (curr_pembeli_idx > 0) {
    do {
      get_int("Untuk melihat detail pembelian, masukkan nomor urutnya pada tabel\nInput:", &target_idx);
    } while (target_idx < 0 || target_idx > curr_pembeli_idx);
    
  } else {
    printf("\nTekan Apa Saja Untuk Kembali Ke Menu !");
    getche();
  }
}

// akan menerima masukan menu user
void menu_utama(int *menu_input) {
  // mencetak menu utama
  system("cls");
  printf("MENU ADMIN APP PT.XYZ\n");
  printf("============================\n");
  printf("1. Tambah data pembeli \n");
  printf("2. Database Motor\n");
  printf("3. Database Pembeli\n");
  printf("4. Keluar Dari Program\n");
  printf("============================\n");
  get_int("Masukkan Nomor Menu (1/2/3/4): ", menu_input);
}
