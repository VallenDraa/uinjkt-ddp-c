#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "models.h"

// Konstanta
const int HARI_BULAN[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Array berisi hari dalam bulan yang berurutan

// prosedur yang akan menerima input string
bool is_str_kosong(char *strDest) {
  bool is_kosong = strlen(strDest) == 0;

  return is_kosong;
}

bool parse_date(char *date_str, Date *date) {
  bool is_valid = false;
  date->hari = atoi(strtok(date_str, "/"));
  date->bulan = atoi(strtok(NULL, "/"));
  date->tahun = atoi(strtok(NULL, "/"));

  // validasi bulan
  if (date->bulan > 12 || date->bulan <= 0) {
    is_valid = false;
    printf("Illegal Bulan\n");
    date->bulan = 0;

    return is_valid;
  } 

  // validasi tanggal 1 hari<= 0
  if (date->hari <= 0) {
    is_valid = false;
    printf("Illegal Hari\n");
    date->hari = 0;

    return is_valid;
  }
  
  // validasi tanggal 2 untuk kabisat
  if (date->tahun % 4 == 0 && date->bulan == 2 && date->hari > 29) {
    is_valid = false;
    printf("Illegal Hari\n");
    date->hari = 0;

    return is_valid;
  }

  // validasi tanggal 3 jika hari lebih besar dari banyak hari dalam bulan tertentu
  if (date->hari > HARI_BULAN[date->bulan - 1]) {
    is_valid = false;
    printf("Illegal Hari\n");
    date->hari = 0;

    return is_valid;
  }

  // jika date valid
  is_valid = true;
  return is_valid;
}

void get_str(char *question, char *strDest) {
  do {
    printf("%s", question);
    fflush(stdin);
    gets(strDest);
  } while (is_str_kosong(strDest));
}

void get_char(char *question, char *charDest) {
  printf("%s", question);
  fflush(stdin);
  *charDest = getchar();
}

void get_int(char *question, int *intDest) {
  printf("%s", question);
  fflush(stdin);
  scanf("%d", intDest);
}
