// Program ini berisi fungsi yang menerima nama hari sekarang dan mengembalikan hari kemarinnya
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// deklarasi konstanta
const char NAMA_HARI[7][10] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};

// deklarasi variable
int i, input_hari_len, hasil = -1;
char input_hari[10], hasil_hari[10];

// deklarasi prosedur
int hari_kemarin(char input_hari[10]);

// deklarasi algoritma
int main()
{
  // meminta masukan hari dari user
  while (true)
  {
    printf("\nMasukkan nama hari (ketik e untuk keluar): ");
    fflush(stdin);
    gets(input_hari);

    // keluar dari program jika input adalah karakter e
    if (strcmp(input_hari, "e") == 0)
    {
      break;
    }

    // mengkonversi input menjadi lowercase
    input_hari_len = sizeof(input_hari) / sizeof(input_hari[0]);
    for (i = 0; i < input_hari_len - 1; i++)
    {
      input_hari[i] = tolower(input_hari[i]);
    }

    // pemanggilan fungsi
    hasil = hari_kemarin(input_hari);
    // jika hasil invalid
    if (hasil == -1)
    {
      continue;
    }
    // jika hasil valid
    else
    {
      printf("Hari sebelum %s adalah %s", input_hari, NAMA_HARI[hasil]);
    }
  }
  return 0;
}

// akan mengembalikan nilai index hari jika tidak valid maka akan mengembalikan -1
int hari_kemarin(char input_hari[10])
{
  int hasil;

  // jika hari minggu maka kembalikan senin
  if (strcmp(input_hari, "senin") == 0)
  {
    hasil = 6;
    return hasil;
  }
  else
  {
    // loop untuk mencari hari yang sama dengan input
    for (int i = 0; i < 6; i++)
    {
      // proses validasi hari
      if (strcmp(input_hari, NAMA_HARI[i]) == 0)
      {
        hasil = i - 1;
        return hasil;
      }
    }
    hasil = -1;
    return hasil;
  }
}
