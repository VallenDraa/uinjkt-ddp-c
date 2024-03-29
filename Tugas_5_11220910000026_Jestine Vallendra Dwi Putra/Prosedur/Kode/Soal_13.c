// Program ini akan berisi prosedur yang akan berjalan terus selayaknya jam
#include <stdio.h>
#include <windows.h>
#include <time.h>

// deklarasi prosedur
void cetak_jam(struct tm *waktu);
void dua_digit(int integer, char separator);

int main()
{
  // memulai timer
  while (1)
  {
    time_t skrg = time(NULL);
    cetak_jam(localtime(&skrg));
    Sleep(1000);
  }
  return 0;
}

// definisi prosedur
void dua_digit(int integer, char separator)
{
  integer < 10 ? printf("%i", integer) : printf("%i", integer);
  if (separator)
    printf("%c", separator);
}

void cetak_jam(struct tm *waktu)
{
  system("cls");
  printf("Pukul: ");
  dua_digit(waktu->tm_hour, ':');
  dua_digit(waktu->tm_min, ':');
  dua_digit(waktu->tm_sec, ' ');
  printf("\nTanggal: ");
  dua_digit(waktu->tm_mday, '-');
  dua_digit(waktu->tm_mon + 1, '-');
  dua_digit(waktu->tm_year + 1900, ' ');
}
