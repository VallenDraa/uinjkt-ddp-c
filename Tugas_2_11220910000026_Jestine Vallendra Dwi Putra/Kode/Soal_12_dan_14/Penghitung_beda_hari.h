#ifndef PENGHITUNG_BEDA_HARI
#define PENGHITUNG_BEDA_HARI

// DEKLARASI STRUCT
typedef struct { int hari; int bulan; int tahun; } Date;

// DEKLARASI GLOBAL CONST
extern const int HARI_BULAN[];

int cek_tahun_kabisat(int tahun);
int hitung_perbedaan_hari(Date start, Date end);
void menu_input_tanggal(int *hari, int *bulan, int *tahun);

#endif