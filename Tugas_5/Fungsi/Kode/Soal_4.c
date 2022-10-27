// program untuk menghitung jarak waktu antara dua jam berbeda
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// deklarasi algoritma
typedef struct
{
  float jam;
  float menit;
  float detik;
} Time;
Time waktu[] = {{0, 0, 0}, {0, 0, 0}};
Time time_diff_res;
char input_waktu[10];
int i;

// deklarasi fungsi
Time get_time_diff(Time start, Time end);

// deklarasi algoritma
int main()
{
  // meminta masukan dari user
  for (i = 0; i < 2; i++)
  {
    while (true)
    {
      printf("\nMasukkan Jam [jj:mm:dd]: ");
      fflush(stdin);
      gets(input_waktu);

      // parsing
      waktu[i].jam = atoi(strtok(input_waktu, ":"));
      waktu[i].menit = atoi(strtok(NULL, ":"));
      waktu[i].detik = atoi(strtok(NULL, ":"));

      // validasi jam
      if (waktu[i].jam > 24)
      {
        printf("Illegal jam\n");
        waktu[i].jam = 0;
        continue;
      }

      // validasi menit
      if (waktu[i].menit > 60 || waktu[i].menit <= 0)
      {
        printf("Illegal menit\n");
        waktu[i].menit = 0;
        continue;
      }

      // validasi detik
      if (waktu[i].detik > 60 || waktu[i].detik <= 0)
      {
        printf("Illegal detik\n");
        waktu[i].detik = 0;
        continue;
      }

      if (waktu[i].detik != 0 && waktu[i].menit != 0 && waktu[i].jam != 0)
        break;
    }
  }

  // menampilkan hasil
  time_diff_res = get_time_diff(waktu[0], waktu[1]);
  printf("Perbedaan waktu adalah %.2f jam, %.2f menit, %.2f detik",
         time_diff_res.jam, time_diff_res.menit, time_diff_res.detik);
}

Time get_time_diff(Time start, Time end)
{
  // mengkonversi input menjadi detik
  int start_in_secs = (start.jam * 3600) + (start.menit * 60) + start.detik;
  int end_in_secs = (end.jam * 3600) + (end.menit * 60) + end.detik;
  int selisih_waktu = abs(end_in_secs - start_in_secs);

  // deklarasi variable hasil akhir
  Time hasil;

  // menghitung perbedaan waktu
  hasil.jam = selisih_waktu / 3600;
  selisih_waktu = selisih_waktu % 3600;
  hasil.menit = selisih_waktu / 60;
  selisih_waktu = selisih_waktu % 60;
  hasil.detik = selisih_waktu;

  return hasil;
}
