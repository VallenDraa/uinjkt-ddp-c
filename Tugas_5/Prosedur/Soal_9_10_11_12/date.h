#ifndef DATE
#define DATE

// DEKLARASI STRUCT
typedef struct { int hari; int bulan; int tahun; } Date;

// DEKLARASI GLOBAL CONST
extern const int HARI_BULAN[];
extern const char NAMA_HARI[7][10];

int is_kabisat(int tahun);
int day_diff(Date start, Date end);

#endif