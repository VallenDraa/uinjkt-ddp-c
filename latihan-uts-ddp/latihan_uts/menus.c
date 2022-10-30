// file ini berisi kode yang berkaitan dengan tampilan
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "models.h"
#include "menus.h"
#include "utils.h"

// definisi prosedur dan fungsi tampilan
void tabel_db_motor(Motor *motor[]) {

}

void tabel_pembeli(Pembeli *pembeli) {
  system("cls");
  printf("Data Pembeli\n");
  printf("Nama: %s", pembeli->ktp.nama);
  printf("alamat: %s", pembeli->ktp.alamat);
  printf("agama: %s", pembeli->ktp.agama);
  printf("pekerjaan: %s", pembeli->ktp.pekerjaaan);
  printf("kewarganegaraan: %s", pembeli->ktp.kewarganegaraan);
}

void menu_input_ktp(Pembeli *pembeli) {
  // string untuk menampung tanggal lahir
  char date_str[12];
  
  get_str("Masukkan nama: ", pembeli->ktp.agama);
  get_str("Masukkan alamat: ", pembeli->ktp.alamat);
  get_str("Masukkan agama: ", pembeli->ktp.agama);
  get_str("Masukkan pekerjaaan: ", pembeli->ktp.pekerjaaan);
  get_str("Masukkan kewarganegaraan: ", pembeli->ktp.kewarganegaraan);
  
  do {
    get_str("Masukkan NIK (16 digit): ", pembeli->ktp.NIK);
  } while (strlen(pembeli->ktp.NIK) != 16);

  do {
    get_str("Masukkan Tanggal Lahir: ", date_str);
  } while (!parse_date(date_str, &pembeli->ktp.tgl_lhr));

  do {
    get_char("Apakah sudah menikah (y/n): ", &pembeli->ktp.isNikah);
  } while (pembeli->ktp.isNikah != 'y' && pembeli->ktp.isNikah != 'n');
  
  do {
    get_char("Masukkan kelamin (p/w): ", &pembeli->ktp.kelamin);
  } while (pembeli->ktp.kelamin != 'p' && pembeli->ktp.kelamin != 'w');
}

void menu_input_pembelian(Pembeli *pembeli, Motor motor[]) {
  do {
    get_int("Jumlah jenis motor yang diinginkan (maks. 8): ", &pembeli->jumlah_jenis_motor);
  } while (pembeli->jumlah_jenis_motor > 8 || pembeli->jumlah_jenis_motor <= 0);
}

void menu_tambah_pembeli(Motor motor[]) {
  system("cls");
  Pembeli pembeli_baru; //membuat objek customer baru
  
  menu_input_ktp(&pembeli_baru);
  menu_input_pembelian(&pembeli_baru, motor);
}

void menu_lihat_db(Motor motor[]) {
  printf("hello 2");
}

// akan menerima masukan menu user
void menu_utama(int *menu_input) {
  // mencetak menu utama
  system("cls");
  printf("Admin App PT XYZ\n");
  printf("Masukkan Nomor Menu ! \n");
  printf("1. Tambah data pembeli \n");
  printf("2. Info Database\n");
  printf("3. Keluar Dari Program\n");
  get_int("Masukkan Nomor Menu (1/2/3): ", menu_input);
}
