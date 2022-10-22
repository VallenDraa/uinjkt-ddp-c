//Program ini memiliki algoritma untuk menghitung luas dan keliling
//dari Lingkaran, Persegi, dan Lingkaran 

// DEKLARASI PUSTAKA
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

// DEKLARASI STRUCT
typedef struct { double jariJari; } Lingkaran;
typedef struct { double sisi; } Persegi; 
typedef struct { 
  double sisiPendek; 
  double sisiPanjang; 
  double sisiKanan; 
  double sisiKiri; 
  double tinggi; 
} Trapesium;
// AKHIR DEKLARASI STRUCT

// DEKLARASI ENUMS
typedef enum { lingkaran = '1', trapesium = '2', persegi = '3', keluar = '4' } OpsiShape;

// DEKLARASI GLOBAL VARIABLE
Lingkaran L1;
Trapesium T1;
Persegi P1;
OpsiShape opsiShape; // untuk menerima input tipe bangun datar
char opsiOperasi;  // untuk menerima input menghitung L atau K

// DEKLARASI FUNGSI OPERASI
double operasiLingkaran(Lingkaran L, char opsiOperasi) {
  return opsiOperasi == 'l' 
    ? M_PI * pow(L.jariJari, (double) 2) 
    : 2 * M_PI * L.jariJari;  
}
double operasiTrapesium(Trapesium T, char opsiOperasi) {
  return opsiOperasi == 'l' 
    ? ((T.sisiPendek + T.sisiPanjang) * T.tinggi) / 2 
    : T.sisiPendek + T.sisiPanjang + T.sisiKanan + T.sisiKiri;  
} 
double operasiPersegi(Persegi P, char opsiOperasi) {
  printf("%c", opsiOperasi);
  return opsiOperasi == 'l' ? pow(P.sisi, 2) : P.sisi * 4;
}

// DEKLARASI FUNGSI TAMPILAN
void menuUtama() {
  printf("\nPenghitung Luas Dan Keliling");
  printf("\n----------------------------");
  printf("\nMasukkan Tipe Bangun Datar !");
  printf("\nLingkaran (1)");
  printf("\nTrapesium (2)");
  printf("\nPersegi (3)");
  printf("\nKeluar Program (4)");
  printf("\nInput: ");
  scanf(" %c", &opsiShape);
}
void menuOpsiOperasi() {
  printf("\nMasukkan Tipe Operasi !");
  printf("\nLuas (l)");
  printf("\nKeliling (k)");
  printf("\nInput: ");
  scanf(" %c", &opsiOperasi);
}
void menuHasilAkhir(double hasil) {
  char operasi[10], bangun[10];
  strcpy(operasi, opsiOperasi == 'l' ? "luas" : "keliling");

  if (opsiShape == lingkaran) strcpy(bangun, "lingkaran");
  else if (opsiShape == trapesium) strcpy(bangun, "trapesium");
  else strcpy(bangun, "persegi");

  printf("\n\nHasil %s %s adalah: %.2lf\n\n", operasi, bangun, hasil);
}
void menuLingkaran() {
  printf("\nData Lingkaran");
  printf("\nMasukkan nilai jari-jari: ");
  scanf("%lf", &L1.jariJari);
  menuOpsiOperasi();
  menuHasilAkhir(operasiLingkaran(L1, opsiOperasi));
}
void menuTrapesium() {
  printf("\nData Trapesium");
  printf("\nMasukkan nilai sisi panjang: ");
  scanf("%lf", &T1.sisiPanjang);
  printf("\nMasukkan nilai sisi pendek: ");
  scanf("%lf", &T1.sisiPendek);
  printf("\nMasukkan nilai sisi kanan: ");
  scanf("%lf", &T1.sisiKanan);
  printf("\nMasukkan nilai sisi kiri: ");
  scanf("%lf", &T1.sisiKiri);
  printf("\nMasukkan nilai Tinggi: ");
  scanf("%lf", &T1.tinggi);
  menuOpsiOperasi();
  menuHasilAkhir(operasiTrapesium(T1, opsiOperasi));
}
void menuPersegi() {
  printf("\nData Persegi");
  printf("\nMasukkan nilai panjang sisi: ");
  scanf("%lf", &P1.sisi);
  menuOpsiOperasi();
  menuHasilAkhir( operasiPersegi(P1, opsiOperasi));
}

// ALGORTIMA
int main() {
  while (true) {
    menuUtama();

    if (opsiShape == lingkaran) menuLingkaran();
    else if (opsiShape == trapesium) menuTrapesium(); 
    else if (opsiShape == persegi) menuPersegi();
    else if (opsiShape == keluar) {
      printf("\nTerima Kasih Telah Menggunakan Program Ini !");
      break;
    } else {
      printf("\n\nTolong masukkan angka yang valid (1/2/3/4) !\n");
    }
  }
  return 0;
}