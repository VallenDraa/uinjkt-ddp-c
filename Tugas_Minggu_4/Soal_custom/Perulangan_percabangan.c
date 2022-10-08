/* Program ini akan menghitung nilai akhir dan huruf mutu siswa/siswi SMK TRIGUNA UTAMA */ 

//DEKLARASI PUSTAKA
#include <stdio.h>
#include <string.h>

// DEKLARASI STRUCT
typedef struct {
  char NIS[10];
  int is_NIS_valid;
  float formatif, UTS, UAS, nilai_akhir;
  char huruf_mutu;
} Siswa;

// DEKLARASI FUNGSI
void input_nilai(float *nilai, char tipe_nilai[]) {
  do {
    printf("Masukkan Nilai %s: ", tipe_nilai);
    scanf("%f", nilai);  
  } while (*nilai < 0 || *nilai > 100);
}
// mengecek apakah semua digit NIS berupa angka
int validasi_NIS(char NIS[10]) {
  int temp = 1;

  for (int i = 0; i < 10; i++) {
    if (!temp) break;
    if (NIS[i] < 48 || NIS[i] > 57) temp = 0;
  }

  return temp;
}

int main() {
  // DEKLARASI VARIABLE
  int is_ulang = 1;
  Siswa siswa;

  // meminta input data siswa dari user dan akan di loop selama user masih ingin menginput data
  while (is_ulang) {
    do {
      printf("\nMasukkan NIS (10 DIGIT): ");
      scanf("%s", &siswa.NIS);    

      siswa.is_NIS_valid = strlen(siswa.NIS) != 10 ? 0 : validasi_NIS(siswa.NIS);
    } while (!siswa.is_NIS_valid);

    input_nilai(&siswa.formatif, "Formatif");  
    input_nilai(&siswa.UTS, "UTS");  
    input_nilai(&siswa.UAS, "UAS");  

    // Penentuan nilai akhir
    siswa.nilai_akhir = (siswa.formatif * 0.4) + (siswa.UTS * 0.3) + (siswa.UAS * 0.3);

    // Penentuan huruf mutu 
    if (siswa.nilai_akhir >= 80) {
      siswa.huruf_mutu = 'A';
    } else if (siswa.nilai_akhir >= 70) {
      siswa.huruf_mutu = 'B';
    } else if (siswa.nilai_akhir >= 60) {
      siswa.huruf_mutu = 'C';
    } else if (siswa.nilai_akhir >= 50) {
      siswa.huruf_mutu = 'D';
    } else if (siswa.nilai_akhir >= 40){
      siswa.huruf_mutu = 'E';
    } else {
      siswa.huruf_mutu = 'F';
    }

    // Mencetak hasil akhir data siswa
    printf("\nDATA SISWA");
    printf("\nNIS\t\t: %s", siswa.NIS);
    printf("\nFormatif\t: %.2f", siswa.formatif);
    printf("\nUTS\t\t: %.2f", siswa.UTS);
    printf("\nUAS\t\t: %.2f", siswa.UAS);
    printf("\nNilai Akhir\t: %.2f", siswa.nilai_akhir);
    printf("\nHuruf Mutu\t: %c\n", siswa.huruf_mutu);

    // memberi pilihan kepada user untuk mengulang program
    do {
      printf("\nApakah anda ingin memasukkan data siswa lagi [1/0]: ");
      scanf("%i", &is_ulang);
    } while (is_ulang != 1 && is_ulang != 0);
  }

  printf("\nTerima kasih telah menggunakan program ini !");
  return 0;
}