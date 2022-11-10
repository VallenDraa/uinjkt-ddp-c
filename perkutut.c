#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

// Deklarasi Struct
typedef struct {
	char kode[7];
	char tujuan[20];
	int harga_bisnis_dewasa;
	int harga_bisnis_kids;
	int harga_ekonomi_dewasa;
	int harga_ekonomi_kids;
} Flight;

typedef struct {
	char nik[5];
	char nama[120];
	char tmpt_lhr[12];
	char tgl_lhr[12];
	char kelamin;
	char alamat [120];
	char agama [120];
	char is_nikah;
	char job[120];
	char kewarganegaraan[120];
	char no_tel[13];
	char tujuan[20];
	char kode_penerbangan;
	char kelas_penerbangan;
	char tgl_penerbangan[12];
	char jam_penerbangan[10];
	char jam_kedatangan[10];
	int jml_dewasa;
	int jml_kids;
	int total_pass;
	long harga_total;
} Tiket;

// Deklarasi Konstanta
const int HARI_BULAN[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // Array berisi hari dalam bulan yang berurutan
const char TUJUAN_AWAL[8] = "Jakarta";
const Flight PENERBANGAN[5] = { 
	{ "PAL001", "Semarang", 800000, 600000, 500000, 400000 },  
	{ "PAL002", "Solo", 850000, 650000, 550000, 450000 },  
	{ "PAL003", "Yogyakarta", 850000, 650000, 550000, 450000 },  
	{ "PAL004", "Surabaya", 1000000, 800000, 700000, 600000 },  
	{ "PAL005", "Bali", 1200000, 1000000, 800000, 700000 },  
}; 
const int MAX_PASS = 4; //jumlah maksimal penumpang
const int JML_PENERBANGAN = 5; // jumlah tipe penerbangan

// Deklarasi Variable
int input_menu;
int i; // index untuk loop
int idx_pembeli = 0; // untuk melacak jumlah pembeli tiket
Tiket data_pembelian[200]; // untuk menampung semua data pembelian

// Deklarasi Prosedur
void tabel_pembelian();
void tabel_catalog_penerbangan();
void menu_utama(int *input_menu); // berisi rute untuk menginput tiket dan melihat data
void menu_input_tiket();
void menu_lihat_db(int *input_menu);
void util_back_to_menu();
void util_print_repeat(char *str, int amount); // prosedur untuk mencetak sebuah string sebanyak n kali

// Deklarasi Fungsi
bool util_is_time_valid(char *time); // validasi waktu
bool util_is_date_valid(char *date); // validasi tanggal

// deklarasi algoritma
int main() {
	// mengulang program selama user belum keluar
	while (true) {
		// memanggil menu utama		
		do {
			menu_utama(&input_menu);
		} while (input_menu > 3 || input_menu < 1);
		
		// router menu
		if (input_menu == 1) {
			menu_input_tiket();
		} else if (input_menu == 2) {
			menu_lihat_db(&input_menu);
		} else {
			break;
		}
		
	}
	
	//	Jika user keluar dari aplikasi
	system("cls");
	printf("Terima Kasih Telah Menggunakan Program Ini");
	return 0;
}

// Definisi Prosedur Menu
void menu_utama(int *input_menu) {
	while (true) {
		system("cls");
		printf("ADMIN MENU PERKUTUT AIRLINE\n");
		util_print_repeat("=", 20);	printf("\n");	
		printf("1. Menu Input Tiket\n");
		printf("2. Menu Lihat Database\n");
		printf("3. Keluar Dari Program\n");
		printf("Input: "); fflush(stdin); scanf("%i", input_menu);
		
		if (*input_menu == 1 || *input_menu == 2 || *input_menu == 3) break;
	} 
}
void menu_input_tiket() {
	system("cls");
	bool is_kode_valid = false; // digunakan untuk validasi input kode penerbangan
	int kode_penerbangan; //idx kode penerbangan pilihan user untuk mengambil harga tiket
	char buffer[120];

	// meminta masukan dari use r terkait data tiker
	do {
		printf("Masukkan NIK (10 Digit): ");
		fflush(stdin);
		gets(data_pembelian[idx_pembeli].nik);
	} while (strlen(data_pembelian[idx_pembeli].nik) > 10 || strlen(data_pembelian[idx_pembeli].nik) < 10);
	
  do {
    printf("Masukkan nama: ");
    fflush(stdin);
    gets(buffer);
    strcpy(data_pembelian[idx_pembeli].nama, buffer);
    printf("%s", data_pembelian[idx_pembeli].nama);
  } while (strlen(buffer) == 0);
	
	do {
		printf("Masukkan Alamat: "); fflush(stdin);
		gets(data_pembelian[idx_pembeli].alamat);
	} while (!data_pembelian[idx_pembeli].alamat);
	
	do {
		printf("Masukkan Kelamin [p/w]: "); fflush(stdin);
		scanf("%c", &data_pembelian[idx_pembeli].kelamin);
	} while (data_pembelian[idx_pembeli].kelamin != 'p' && data_pembelian[idx_pembeli].kelamin != 'w');
	
	do {
		printf("Masukkan Tanggal Lahir [dd/mm/yyyy]: "); fflush(stdin);
		gets(data_pembelian[idx_pembeli].tgl_lhr);
	} while (!util_is_date_valid(data_pembelian[idx_pembeli].tgl_lhr));

	do {
		printf("Masukkan Tempat Lahir: "); fflush(stdin);
		gets(data_pembelian[idx_pembeli].tmpt_lhr);
	} while (!data_pembelian[idx_pembeli].tmpt_lhr);
	
	do {
		printf("Apakah Anda Sudah Menikah [y/n]: "); fflush(stdin);
		scanf("%c", &data_pembelian[idx_pembeli].is_nikah);
	} while (tolower(data_pembelian[idx_pembeli].is_nikah) != 'y' && tolower(data_pembelian[idx_pembeli].is_nikah) != 'n' );

	do {
		printf("Masukkan Pekerjaan Anda: "); fflush(stdin);
		gets(data_pembelian[idx_pembeli].job);
	} while (!data_pembelian[idx_pembeli].job);

	do {
		printf("Masukkan Kewarganegaraan Anda: "); fflush(stdin);
		gets(data_pembelian[idx_pembeli].kewarganegaraan);
	} while (!data_pembelian[idx_pembeli].kewarganegaraan);

	do {
		printf("Masukkan Nomor Telepon Anda: "); fflush(stdin);
		gets(data_pembelian[idx_pembeli].no_tel);
	} while (strlen(data_pembelian[idx_pembeli].no_tel) > 10 || strlen(data_pembelian[idx_pembeli].no_tel) < 10);
	
	while (!is_kode_valid) {
		system("cls");
		tabel_catalog_penerbangan();
				
    printf("Masukkan Kode Penerbangan Tiket: "); fflush(stdin);
		gets(data_pembelian[idx_pembeli].kode_penerbangan);
		
		//	meloop array catalog penerbangan untuk validasi kode penerbangan	
		for (i = 0; i < 5; i++) {
			if (strcmp(PENERBANGAN[i].kode, &data_pembelian[idx_pembeli].kode_penerbangan) == 0) {
				is_kode_valid = true;
				kode_penerbangan = i;
				strcpy(data_pembelian[idx_pembeli].tujuan, PENERBANGAN[i].tujuan);
				break;	
			}
		}
	}
	
	do {
		system("cls");
		tabel_catalog_penerbangan();
				
		printf("\nMasukkan Kelas Penerbangan [e/b]: "); fflush(stdin);
		gets(&data_pembelian[idx_pembeli].kelas_penerbangan);
		
		//	meloop array catalog penerbangan untuk validasi kode penerbangan	
	} while (data_pembelian[idx_pembeli].kelas_penerbangan != 'b' && data_pembelian[idx_pembeli].kelas_penerbangan != 'e');

	do {
		printf("Masukkan Tanggal Penerbangan [dd/mm/yyyy]: "); fflush(stdin);
		gets(data_pembelian[idx_pembeli].tgl_penerbangan);
	} while (!util_is_date_valid(data_pembelian[idx_pembeli].tgl_penerbangan));

	do {
		printf("Masukkan Jam Penerbangan [hh:mm:dd]: "); fflush(stdin);
		gets(data_pembelian[idx_pembeli].jam_penerbangan);
	} while (!util_is_time_valid(data_pembelian[idx_pembeli].jam_penerbangan));
	
	do {
		printf("Masukkan Jam Kedatangan [hh:mm:dd]: "); fflush(stdin);
		gets(data_pembelian[idx_pembeli].jam_penerbangan);
	} while (!util_is_time_valid(data_pembelian[idx_pembeli].jam_penerbangan));
	
	while (true) {
		printf("Masukkan Jumlah Penumpang Dewasa (Maks. %i): ", 4 - data_pembelian[idx_pembeli].total_pass); 
		fflush(stdin);
		scanf("%i", &data_pembelian[idx_pembeli].jml_dewasa);		
		
		if (data_pembelian[idx_pembeli].jml_dewasa <= 4) {
			data_pembelian[idx_pembeli].total_pass = data_pembelian[idx_pembeli].jml_dewasa;
			break;
		}
	}

	while (true) {
		printf("Masukkan Jumlah Penumpang Anak-Anak (Maks. %i): ", 4 - data_pembelian[idx_pembeli].total_pass); 
		fflush(stdin);
		scanf("%i", &data_pembelian[idx_pembeli].jml_kids);
		
		if (data_pembelian[idx_pembeli].jml_kids + data_pembelian[idx_pembeli].total_pass <= 4) {
			data_pembelian[idx_pembeli].total_pass += data_pembelian[idx_pembeli].jml_kids;
			break;
		}
	}	

	//	menghitung harga total dewasa
	if (data_pembelian[idx_pembeli].kelas_penerbangan == 'b') {
		for (i = 0; i < data_pembelian[idx_pembeli].jml_dewasa; i++) {
			data_pembelian[idx_pembeli].harga_total += PENERBANGAN[kode_penerbangan].harga_bisnis_dewasa;
		}
	} else {
		for (i = 0; i < data_pembelian[idx_pembeli].jml_dewasa; i++) {
			data_pembelian[idx_pembeli].harga_total += PENERBANGAN[kode_penerbangan].harga_ekonomi_dewasa;
		}
	}
	
	//	menghitung harga total anak-anak
	if (data_pembelian[idx_pembeli].kelas_penerbangan == 'b') {
		for (i = 0; i < data_pembelian[idx_pembeli].jml_kids; i++) {
			data_pembelian[idx_pembeli].harga_total += PENERBANGAN[kode_penerbangan].harga_bisnis_kids;
		}
	} else {
		for (i = 0; i < data_pembelian[idx_pembeli].jml_kids; i++) {
			data_pembelian[idx_pembeli].harga_total += PENERBANGAN[kode_penerbangan].harga_ekonomi_kids;
		}
	}
	
	// menambahkan penghitung jumlah pembeli	
	idx_pembeli += 1;
	system("cls");
	printf("\nData Berhasil Ditambahkan :) \n");                                      
	util_back_to_menu();
}
void menu_lihat_db(int *input_menu) {
	while (true) {
		system("cls");
		printf("DATABASE PERKUTUT AIRLINE\n");
		util_print_repeat("=", 20);
		printf("\n1. Data Catalog Penerbangan\n");
		printf("2. Data Pembelian\n");
		printf("3. Kembali Ke Menu\n");
		printf("Input: "); fflush(stdin); scanf("%i", input_menu);
		
		// router menu database		
		if (*input_menu == 1) {
			system("cls");
			tabel_catalog_penerbangan();
			util_back_to_menu();			
		} else if (*input_menu == 2) {
			system("cls");
			tabel_pembelian();
			util_back_to_menu();
		} else if (*input_menu == 3){		
			break;
		} 
	}
}

// Definisi Prosedur Tabel
void tabel_catalog_penerbangan() {
	// mencetak header table	
	printf("TABEL CATALOG PENERBANGAN\n");
	util_print_repeat("=", 80);
	printf("\n| NO | Kode Penerbangan | Kota Tujuan | Harga Tiket Bisnis | Harga Tiket Ekonomi |\n");
	printf("\n|	%-29s | Dewasa | Anak-Anak | Dewasa  | Anak-Anak |\n", " ");
	util_print_repeat("=", 80);

	// meloop seisi array data tipe penerbangan
	for (i = 0; i < JML_PENERBANGAN; i++) {
		printf("\n| %-3i | %-10s | %-10s | Rp.%-9li | Rp.%-9li | Rp.%-9li | Rp.%-9li |",
						i + 1, PENERBANGAN[i].kode, PENERBANGAN[i].tujuan, PENERBANGAN[i].harga_bisnis_dewasa, PENERBANGAN[i].harga_bisnis_kids
						, PENERBANGAN[i].harga_bisnis_kids, PENERBANGAN[i].harga_ekonomi_dewasa, PENERBANGAN[i].harga_ekonomi_kids 
					);
	}
	
	// footer table
	printf("\n");
	util_print_repeat("=", 80);
}
void tabel_pembelian() {
	// mencetak header table	
	printf("TABEL PEMBELIAN TIKET\n");
	util_print_repeat("=", 120);
	printf("\n| NO | Nama Pembeli | Kode | Tanggal | Keberangkatan | Kedatangan | Kelas | Dewasa | Anak | Harga |\n");
	util_print_repeat("=", 20);
	
	// pengecekan jumlah pembeli 
	if (idx_pembeli == 0) {
		printf("\n| Belum Ada Data Pembeli |");
	} else {
		for (i = 0; i < idx_pembeli; i++) {
			printf("\n| %-3i | %-10s | %-8s | %-8s | %-8s | %-8s | %-10s | %-10s | %-4i | %-4i | %-5li",
						i + 1, data_pembelian[i].nama, data_pembelian[i].kode_penerbangan, data_pembelian[i].tgl_penerbangan,
						data_pembelian[i].jam_penerbangan, data_pembelian[i].jam_penerbangan, data_pembelian[i].jam_kedatangan,
						data_pembelian[i].kelas_penerbangan == 'e' ? "Ekonomi": "Bisnis", data_pembelian[i].jml_dewasa, 
						data_pembelian[i].jml_kids, data_pembelian[i].harga_total);
		}
	}
	
	// footer table
	printf("\n");
	util_print_repeat("=", 120); printf("\n");
}

// Definisi Prosedur Utility
void util_back_to_menu() {
	printf("\nKlik Apa Saja Untuk Kembali Ke Menu !");
	getche();
}
void util_print_repeat(char *str, int amount) {
	for (i = 0; i < amount; i++) printf("%s", str);
}

// prosedur utitlity untuk validasi tanggal dan jam
bool util_is_date_valid(char *date) {	
	int hari = atoi(strtok(date, "/"));
	int bulan = atoi(strtok(NULL, "/"));
	int tahun = atoi(strtok(NULL, "/"));
	bool is_valid = true;

	// Validasi Tahun
	if (!tahun) return !is_valid;
	
	// validasi Bulan
	if (bulan <= 0 || bulan > 12) return !is_valid;
	
	// Validasi Hari
	if (hari <= 0 || hari > HARI_BULAN[bulan - 1]) return !is_valid;
	
	// Validasi hari pada tahun kabisat
	if (tahun % 4 == 0 && HARI_BULAN[bulan - 1] && hari > 29 ) return !is_valid;
	
	//	Jika tanggal berhasil melewati validasi
	return is_valid;
}
bool util_is_time_valid(char *time) {
	int jam = atoi(strtok(time, ":"));
	int menit = atoi(strtok(NULL, ":"));
	int detik = atoi(strtok(NULL, ":"));
	bool is_valid = true;

	// Validasi Jam
	if (jam > 24) return !is_valid;
	
	// Validasi Menit
	if (menit > 60 || menit < 0) return !is_valid;
	
	// Validasi Detika
	if (detik > 60 || detik < 0) return !is_valid;

	// Jika tanggal berhasil melewati validasi
	return is_valid;
}