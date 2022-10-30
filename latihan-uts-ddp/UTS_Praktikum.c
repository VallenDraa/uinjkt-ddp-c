/*
	Program PT XYZ
	Transaksi penjualan kendaraan Otomotif
	dan transaksi pembelian/pembayaran
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Deklarasi variabel public
int databases[8]; // untuk jumlah QTY per jenis motor dinamakan databases
int pilihanMenu1, pilihanMenu2;
int jmlpembeli;
int jmlbeli;
int jmljenis;
int modal;
struct data{
	char tglpembelian[50];
	char NIK[12];
	char nama[100];
	char TTL[50];
	char jenisKelamin[15];
	char alamat[100];
	char agama[20];
	char status[25];
	char pekerjaan[50];
	char kewarganegaraan[50];
	char jenisMotor[20];
	int Qty;
	int harga;
}pembeli[200];
// Akhir Deklarasi Variabel public

// Deklarasi Procedure
void inputDataPembeli();
int cetakData();
void dataTabel();
void menu(int z);
void jenismotor();
// Akhir Deklarasi Procedure

// Main Program
int main(){
	// Deklarasi variabel scop main utama
	int utama;
	jmlpembeli = 0;
	jmlbeli = 8;
	modal = 400000;
	databases[0] = 30;
	databases[1] = 30;
	databases[2] = 20;
	databases[3] = 10;
	databases[4] = 20;
	databases[5] = 15;
	databases[6] = 10;
	databases[7] = 5;
	// Akhir Deklarasi variable scop main utama
	
	// main menu
	do{
		// Judul Program
		system("cls");
		printf("=============================\n");
		printf("=          PT. XYZ          =\n");
		printf("=============================\n\n\n");
		// akhir Judul Program
		
		// memanggil fungsi menu
	    menu(1);
	    // akhir pemanggilan fungsi
	    
	    // Kondisi pemilihan menu
	    switch(pilihanMenu1){
	    	case 1:{
	    		// pilihan menu pertama
	    		/*
	    			isi dari pilihan menu ini terdapat
	    			beberapa data yang harus diinputkan
	    			diantaranya NIK, Nama, Tanggal Lahir,
	    			Jenis kelamin, Kota asal atau alamat,
	    			Agama, Status nikah, pekerjaan, asal
	    			negara, jenis motor yang akan dibeli
	    			dan jumlah barang yang akan dibeli.
	    		*/
	    		inputDataPembeli();
				break;
			}
			case 2:{
				// pilihan menu kedua
				/*
					isi dari pilihan menu ini terdapat
					beberapa laporan yang terdiri dari
					laporan uang modal perusahaan,
					tabel barang, dan histori pembelian.
				*/
				cetakData();
				break;
			}
			case 3:{
				// pilihan menu ketiga
				/*
					isi dari pilihan menu ini untuk mengakhiri program.
				*/
				return 0;
				break;
			}
		} 
		// akhir kondisi pemilihan  menu
		
		utama = 1;
	}while(utama == 1);
	// akhir main menu
}
// Akhir main program

// Procedure pilihan menu pertama
void inputDataPembeli(){
	int i;
	printf("Masukan data pembeli\n\n");
	// menginputkan NIK pembeli
	do{
		printf("NIK Pembeli (10 digits)    : ");
		fflush(stdin);
		scanf("%s", &pembeli[jmlpembeli].NIK);
	}while(!(strlen(pembeli[jmlpembeli].NIK) == 10));
	// menginputkan nama pembeli
	do{
		printf("Nama Panggilan Pembeli     : ");
		fflush(stdin);
		gets(pembeli[jmlpembeli].nama);
	}while(strcmp(pembeli[jmlpembeli].nama, "") == 0);
	// menginputkan tanggal lahir pembeli
	do{
		printf("Tanggal Lahir (dd/mm/yyyy) : ");
		fflush(stdin);
		gets(pembeli[jmlpembeli].TTL);
	}while(!(strlen(pembeli[jmlpembeli].TTL) == 10));
	//^(0?[1-9]|[12][0-9]|3[01])[\/\-](0?[1-9]|1[012])[\/\-]\d{4}$
	
	// menginputkan jenis kelamin pembeli
	do{
		printf("Jenis Kelamin (pria/wanita): ");
		fflush(stdin);
		gets(pembeli[jmlpembeli].jenisKelamin);
	}while(!((strcmp(pembeli[jmlpembeli].jenisKelamin, "pria") == 0) || (strcmp(pembeli[jmlpembeli].jenisKelamin, "wanita") == 0)));
	// menginputkan alamat pembeli
	do{
		printf("Kota asal                  : ");
		fflush(stdin);
		gets(pembeli[jmlpembeli].alamat);
	}while(strcmp(pembeli[jmlpembeli].alamat, "") == 0);
	// menginputkan Agama pembeli
	do{
		printf("Agama                      : ");
		fflush(stdin);
		gets(pembeli[jmlpembeli].agama);
	}while(strcmp(pembeli[jmlpembeli].agama, "") == 0);
	// menginputkan status pembeli
	do{
		printf("Status nikah (nikah/belum) : ");
		fflush(stdin);
		gets(pembeli[jmlpembeli].status);
	}while(!((strcmp(pembeli[jmlpembeli].status, "nikah") == 0) || (strcmp(pembeli[jmlpembeli].status, "belum") == 0)));
	// menginputkan pekerjaan pembeli
	do{
		printf("Pekerjaan                  : ");
		fflush(stdin);
		gets(pembeli[jmlpembeli].pekerjaan);
	}while(strcmp(pembeli[jmlpembeli].pekerjaan, "") == 0);
	// menginputkan kewarganegaraan pembeli
	do{
		printf("Asal Negara                : ");
		fflush(stdin);
		gets(pembeli[jmlpembeli].kewarganegaraan);
	}while(strcmp(pembeli[jmlpembeli].kewarganegaraan, "") == 0);
	// Bertanya hal jumlah beli jenis motor
	do{
		printf("masukan jumlah jenis motor yang akan dibeli (maks %d): ", jmlbeli);
		fflush(stdin);
		scanf("%d", &jmljenis);
		for(i = 1; i <= 8; i++){
			if(databases[i-1] < 1){
				jmlbeli--;
			}
		}
	}while(!(jmljenis <= jmlbeli));
	printf("%d", jmljenis);
	for(i = 1; i <= jmljenis; i++){
		switch(i){
			case 1:{
				// mengeksekusi berdasarkan pembelian jenis motor
				// memanggil procedure data tabel dan jenis motor
				printf("\tPilih Jenis Motor: ke-%d: \n", i);
				dataTabel();
				jenismotor();
				// menginputkan Tanggal pembelian
				do{
					printf("Tanggal pembelian (dd/mm/yyyy) : ");
					fflush(stdin);
					gets(pembeli[jmlpembeli].tglpembelian);
				}while(!(strlen(pembeli[jmlpembeli].tglpembelian) == 10));
				break;
			}
			default:{
				strcpy(pembeli[jmlpembeli].NIK, pembeli[jmlpembeli-1].NIK);
				strcpy(pembeli[jmlpembeli].nama, pembeli[jmlpembeli-1].nama);
				strcpy(pembeli[jmlpembeli].TTL, pembeli[jmlpembeli-1].TTL);
				strcpy(pembeli[jmlpembeli].jenisKelamin, pembeli[jmlpembeli-1].jenisKelamin);
				strcpy(pembeli[jmlpembeli].alamat, pembeli[jmlpembeli-1].alamat);
				strcpy(pembeli[jmlpembeli].agama, pembeli[jmlpembeli-1].agama);
				strcpy(pembeli[jmlpembeli].status, pembeli[jmlpembeli-1].status);
				strcpy(pembeli[jmlpembeli].pekerjaan, pembeli[jmlpembeli-1].pekerjaan);
				strcpy(pembeli[jmlpembeli].kewarganegaraan, pembeli[jmlpembeli-1].kewarganegaraan);
				printf("\tPilih Jenis Motor ke-%d: \n", i);
				dataTabel();
				jenismotor();
				// menginputkan Tanggal pembelian
				strcpy(pembeli[jmlpembeli].tglpembelian, pembeli[jmlpembeli-1].tglpembelian);
				break;
			}
		}
		jmlpembeli++;
	}
}

// procedure pilihan menu kedua
int cetakData(){
	int i, a;
	char b[1];
	do{
		system("cls");
		// menampilkan data modal perusahaan
		printf("Modal Awal Perusahaan     : Rp. 400000 rb\n");
		printf("Tambahan Modal Perusahaan : Rp. %d rb\n", modal-400000);
		printf("Modal akhir Perusahaan    : Rp. %d rb\n\n\n", modal);
		printf("Tabel Data\n");
		// menampilkan data tabel barang jualan
		dataTabel();
		
		// menampilkan data data masuk / pembeli
		printf("\n\nData Pembeli\n");
		printf("============\n");
		printf("+----+--------------+---------------+-------------------+-----+---------------+\n");
		printf("| No |    Pembeli   | Tgl Pembelian |    Jenis Motor    | QTY |     Harga     |\n");
		printf("+----+--------------+---------------+-------------------+-----+---------------+\n");
		
		if(jmlpembeli == 0){
			printf("| %2d | %-12s | %-13s | %-17s | %-3s | %-12s  |\n", 1, "--", "--", "--", "--", "--");
		}
		if(jmlpembeli != 0){
			for(i = 1; i < jmlpembeli + 1; i++){
				printf("| %2d | %-12s | %-13s | %-17s | %-3d | Rp. %-7drb |\n", i, pembeli[(i - 1)].nama, pembeli[(i - 1)].tglpembelian,
				pembeli[(i - 1)].jenisMotor, pembeli[(i - 1)].Qty, pembeli[(i - 1)].harga);
			}
		}
		printf("+----+--------------+---------------+-------------------+-----+---------------+\n");
		printf("|                            Total                            | Rp. %-7drb |\n", modal - 400000);
		printf("+----+--------------+---------------+-------------------+-----+---------------+\n");
		printf("\n\n\n\n");
		menu(2);
		switch(pilihanMenu2){
			case 1:{
				return 0;
				break;
			}
			case 2:{
				printf("\n\n\n");
				do{
					printf("Masukan Nomor urut Pembeli : ");
					fflush(stdin);
					scanf("%d", &a);
				}while(a > jmlpembeli);
				printf("NIK             : %s\n",pembeli[a-1].NIK);
				printf("Nama            : %s\n",pembeli[a-1].nama);
				printf("TTL             : %s\n",pembeli[a-1].TTL);
				printf("Jenis Kelamin   : %s\n",pembeli[a-1].jenisKelamin);
				printf("Alamat          : %s\n",pembeli[a-1].alamat);
				printf("Agama           : %s\n",pembeli[a-1].agama);
				printf("Status          : %s\n",pembeli[a-1].status);
				printf("Pekerjaan       : %s\n",pembeli[a-1].pekerjaan);
				printf("Negara          : %s\n",pembeli[a-1].kewarganegaraan);
				printf("Jenis Motor     : %s\n",pembeli[a-1].jenisMotor);
				printf("QTY             : %d\n",pembeli[a-1].Qty);
				printf("Total Harga     : %d\n",pembeli[a-1].harga);
				printf("Tanggal Membeli : %s\n",pembeli[a-1].tglpembelian);
				printf("\ningin mengulangi (y/n)? : ");fflush(stdin);scanf("%s",&b);				
				break;
			}
		}
	}while(strcmp(b, "y") || strcmp(b, "Y"));
}

// Data tabel barang jualan (Aset)
void dataTabel(){
	 printf("\t+----+-------------------+-----+-----------------+\n");
	 printf("\t| No |    Jenis Motor    | QTY |      Harga      |\n");
	 printf("\t+----+-------------------+-----+-----------------+\n");
	printf("\t| 1. | Revo F1 110       | %-3d | @Rp. 12.500 rb  |\n", databases[0]);
	printf("\t| 2. | New Supra X 15 F1 | %-3d | @Rp. 18.500 rb  |\n", databases[1]);
	printf("\t| 3. | New Beat FI       | %-3d | @Rp. 12.000 rb  |\n", databases[2]);
	printf("\t| 4. | Vega ZR           | %-3d | @Rp. 13.500 rb  |\n", databases[3]);
	printf("\t| 5. | Jupiter Z         | %-3d | @Rp. 14.000 rb  |\n", databases[4]);
	printf("\t| 6. | Jupiter MX        | %-3d | @Rp. 17.000 rb  |\n", databases[5]);
	printf("\t| 7. | Satria FU 150     | %-3d | @Rp. 19.500 rb  |\n", databases[6]);
	printf("\t| 8. | Shogun R 125      | %-3d | @Rp. 14.000 rb  |\n", databases[7]);
	 printf("\t+----+-------------------+-----+-----------------+\n");
}

// procedure untuk khusus format menu
void menu(int z){
	switch(z){
		case 1:{
			// menu pada layar utama
			printf("+----+----------------------+\n");
			printf("| No |         Menu         |\n");
			printf("+----+----------------------+\n");
			printf("| 1. | Tambah Data Pembeli  |\n");
			printf("| 2. | Informasi            |\n");
			printf("| 3. | Keluar               |\n");
			printf("+----+------------------+---+\n");
			do{
				printf("Masukan Nomor Menu (1/2/3) : ");
				fflush(stdin);
				scanf("%d", &pilihanMenu1);
			}while((pilihanMenu1 > 3) || (pilihanMenu1 < 1));
			break;
		}
		case 2:{
			// menu pada data laporan
			printf("+----+----------------------+\n");
			printf("| No |         Menu         |\n");
			printf("+----+----------------------+\n");
			printf("| 1. | Home / Kembali       |\n");
			printf("| 2. | Identitas Pembeli    |\n");
			printf("+----+------------------+---+\n");
			do{
				printf("Masukan Nomor Menu (1/2) : ");
				fflush(stdin);
				scanf("%d", &pilihanMenu2);
			}while((pilihanMenu2 > 2) || (pilihanMenu2 < 1));
			break;
		}
	}
}

// operating pada jenis kendaraan
void jenismotor(){
	int a, tipe;
	do{
		// pemilihan tipe motor dan dimasukan ke variabel tipe
		printf("Nomor Jenis Motor : ");
		fflush(stdin); 
		scanf("%d", &tipe);
		if(databases[tipe - 1] < 1){
			a = 1;
		}else{
			switch(tipe){
				case 1:{
					// tipe jenis motor revo fi 110
					strcpy(pembeli[jmlpembeli].jenisMotor, "Revo F1 110");
					do{
						printf("Jumlah beli Motor : ");
						fflush(stdin);
						scanf("%d", &pembeli[jmlpembeli].Qty);
					}while(pembeli[jmlpembeli].Qty > databases[0]);
					databases[0] = databases[0] - pembeli[jmlpembeli].Qty;
					pembeli[jmlpembeli].harga = pembeli[jmlpembeli].Qty * 12500;
					break;
				}
				case 2:{
					// tipe jenis motor New Supra X 15 F1
					strcpy(pembeli[jmlpembeli].jenisMotor, "New Supra X 15 F1");
					do{
						printf("Jumlah beli Motor : ");
						fflush(stdin);
						scanf("%d", &pembeli[jmlpembeli].Qty);
					}while(pembeli[jmlpembeli].Qty > databases[1]);
					databases[1] = databases[1] - pembeli[jmlpembeli].Qty;
					pembeli[jmlpembeli].harga = pembeli[jmlpembeli].Qty * 18500;
					break;
				}
				case 3:{
					// tipe jenis motor New Beat FI
					strcpy(pembeli[jmlpembeli].jenisMotor, "New Beat FI");
					do{
						printf("Jumlah beli Motor : ");
						fflush(stdin);
						scanf("%d", &pembeli[jmlpembeli].Qty);
					}while(pembeli[jmlpembeli].Qty > databases[2]);
					databases[2] = databases[2] - pembeli[jmlpembeli].Qty;
					pembeli[jmlpembeli].harga = pembeli[jmlpembeli].Qty * 12500;
					break;
				}
				case 4:{
					// tipe jenis motor Vega ZR
					strcpy(pembeli[jmlpembeli].jenisMotor, "Vega ZR");
					do{
						printf("Jumlah beli Motor : ");
						fflush(stdin);
						scanf("%d", &pembeli[jmlpembeli].Qty);
					}while(pembeli[jmlpembeli].Qty > databases[3]);
					databases[3] = databases[3] - pembeli[jmlpembeli].Qty;
					pembeli[jmlpembeli].harga = pembeli[jmlpembeli].Qty * 13500;
					break;
				}
				case 5:{
					// tipe jenis motor Jupiter Z
					strcpy(pembeli[jmlpembeli].jenisMotor, "Jupiter Z");
					do{
						printf("Jumlah beli Motor : ");
						fflush(stdin);
						scanf("%d", &pembeli[jmlpembeli].Qty);
					}while(pembeli[jmlpembeli].Qty > databases[4]);
					databases[4] = databases[4] - pembeli[jmlpembeli].Qty;
					pembeli[jmlpembeli].harga = pembeli[jmlpembeli].Qty * 14000;
					break;
				}
				case 6:{
					// tipe jenis motor Jupiter MX
					strcpy(pembeli[jmlpembeli].jenisMotor, "Jupiter MX");
					do{
						printf("Jumlah beli Motor : ");
						fflush(stdin);
						scanf("%d", &pembeli[jmlpembeli].Qty);
					}while(pembeli[jmlpembeli].Qty > databases[5]);
					databases[5] = databases[5] - pembeli[jmlpembeli].Qty;
					pembeli[jmlpembeli].harga = pembeli[jmlpembeli].Qty * 17000;
					break;
				}
				case 7:{
					// tipe jenis motor Satria FU 150
					strcpy(pembeli[jmlpembeli].jenisMotor, "Satria FU 150");
					do{
						printf("Jumlah beli Motor : ");
						fflush(stdin);
						scanf("%d", &pembeli[jmlpembeli].Qty);
					}while(pembeli[jmlpembeli].Qty > databases[6]);
					databases[6] = databases[6] - pembeli[jmlpembeli].Qty;
					pembeli[jmlpembeli].harga = pembeli[jmlpembeli].Qty * 19500;
					break;
				}
				case 8:{
					// tipe jenis motor Shogun R 125
					strcpy(pembeli[jmlpembeli].jenisMotor, "Shogun R 125");
					do{
						printf("Jumlah beli Motor : ");
						fflush(stdin);
						scanf("%d", &pembeli[jmlpembeli].Qty);
					}while(pembeli[jmlpembeli].Qty > databases[7]);
					databases[7] = databases[7] - pembeli[jmlpembeli].Qty;
					pembeli[jmlpembeli].harga = pembeli[jmlpembeli].Qty * 14000;
					break;
				}
				// mengantisipasi terjadinya inputan salah
				default:{
					a = 1;
					break;
				}
			}
			// memberikan update untuk modal
			modal = modal + pembeli[jmlpembeli].harga;	
		}
	}while(a == 1);
}
