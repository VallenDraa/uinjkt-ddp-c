// Program ini berisi prosedur yang menerima nama hari sekarang dan menentukan hari sebelumnya 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// deklarasi konstanta
const char NAMA_HARI[7][10] = { "senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu" };

// deklarasi variable
int i, input_hari_len;
char input_hari[10], hasil_hari[10];
bool is_hari_valid = false;

// deklarasi prosedur
void hari_esok(char input_hari[10], bool *is_hari_valid);

// deklarasi algoritma
int main() {
  // meminta masukan hari dari user
  while (!is_hari_valid) {
    printf("\nMasukkan nama hari: ");
    fflush(stdin);
    gets(input_hari);
    input_hari_len = sizeof(input_hari) / sizeof(input_hari[0]);

    // mengkonversi input menjadi lowercase
    for (i = 0; i < input_hari_len - 1; i++) {
      input_hari[i] = tolower(input_hari[i]);
    }

    // pemanggilan prosedur
    hari_esok(input_hari, &is_hari_valid);
  }
  return 0;
}

void hari_esok(char input_hari[10], bool *is_hari_valid) { 
  
  // jika hari minggu maka kembalikan senin
  if (strcmp(input_hari, "senin") == 0) {
    printf("\nHari sebelum %s adalah %s", input_hari, NAMA_HARI[6]);
    *is_hari_valid = true; 
  } else {
    // loop untuk mencari hari yang sama dengan input
    for (int i = 1; i < 7; i++){
      // proses validasi hari
      if (strcmp(input_hari, NAMA_HARI[i]) == 0) {
        printf("\nHari sebelum %s adalah %s", input_hari, NAMA_HARI[i - 1]);
        *is_hari_valid = true; 
        break;
      } 
    }
  }
}