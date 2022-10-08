/* 
  Program ini akan membaca semua input karakter dari user  dan hanya akan berhenti ketika input berupa .
  Kemudian hasil akan di cetak ke layar 
*/

// DEKLARASI PUSTAKA
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// DEKLARASI GLOBAL VARIABLE
char* input_str;
int str_size = 10, curr_idx = 0;

// DEKLARASI ALGORITMA
int main() {
  // mengalokasi ukuran default string pada memori
  input_str = malloc(str_size * sizeof(char));

  // Meminta masukkan karakter dari user
  while (true) {
    // mengalokasi tambahan memori jika array sudah full capacity
    if (curr_idx == str_size - 1) {
      str_size *= 2;
      input_str = realloc(input_str, str_size * sizeof(char));
    } 

    printf("Masukkan Karakter ke-%i: ", curr_idx + 1);
    scanf(" %c", &input_str[curr_idx]);
    
    if (input_str[curr_idx] == '.') {
      input_str[curr_idx] = '\0';
      break; 
    }

    // bergerak ke posisi elemen berikutnya pada array
    curr_idx++; 
  }

  puts(input_str);

  // menghapus memori yang dipakai untuk string
  free(input_str);
  return 0;
}