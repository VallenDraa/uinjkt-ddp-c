/* Program ini akan Menghitung perbedaan hari */ 

//DEKLARASI PUSTAKA
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

// Deklarasi definisi
#define DAYS_STR_LEN 7
#define DAYS_ARR_LEN 7

int main() {
  // DEKLARASI KONSTANTA
  const char HARI[DAYS_ARR_LEN][DAYS_STR_LEN] = 
  { "senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu" };

  // DEKLARASI VARIABLE
  char hari_1[10], hari_2[10];
  int perbedaan, day_idx_1 = -1, day_idx_2 = -1;

  while (day_idx_1 == -1) {
    // Meminta input hari dari user
    printf("\nMasukkan hari pertama: ");
    scanf("%s", &hari_1);
    for (int i = 0 ; i < sizeof(hari_2) / sizeof(hari_1[0]); i++) {
      hari_1[i] = tolower(hari_1[i]);  
    }
    for (int i = 0; i < 7; i++) {
      if (strcmp(HARI[i], hari_1) == 0) {
        day_idx_1 = i;
        break;
      } else { 
        day_idx_1 = -1; 
      }
    }
  }
  
  while (day_idx_2 == -1) {
    printf("\nMasukkan hari kedua: ");
    scanf("%s", &hari_2);
    for (int i = 0 ; i < sizeof(hari_2) / sizeof(hari_2[0]); i++) {
      hari_2[i] = tolower(hari_2[i]);  
    }
    for (int i = 0; i < 7; i++) {
      if (strcmp(HARI[i], hari_2) == 0) {
        day_idx_2 = i;
        break;
      } else { 
        day_idx_2 = -1; 
      }
  }
  }

  // menghitung perbedaan hari 
  if (day_idx_1 == day_idx_2) {
    perbedaan = 7;
  } else {
    perbedaan = day_idx_1 > day_idx_2 ? abs(day_idx_1 - (7 + day_idx_2)) 
                                      : day_idx_2 - day_idx_1;
  }

  // Menampilkan perbedaan durasi hari
  printf("Perbedaan durasi hari %s dan hari %s adalah %i hari", 
        HARI[day_idx_1], HARI[day_idx_2], perbedaan);

  return 0;
}