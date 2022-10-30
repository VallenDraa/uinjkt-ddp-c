/* Program ini berisi element struct mahasiswa
  1. membuat fungsi untuk mencetak data mahasiswa dengan IP > 2.0
  2. membuat fungsi untuk mencetak nama dan nim mahasiswa dengan IPK tertinggi dan terendah
*/

// deklarasi pustaka
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

// deklarasi variable
typedef struct
{
  char nama[120];
  long long NIM;
  float IPK;
} Mahasiswa;
Mahasiswa list_mhs[] = {
    {"Foo", 11220910000111, 1.5},
    {"Bar", 11220910000222, 3.1},
    {"John", 11220910000333, 4},
    {"Doe", 11220910000444, 2.5},
};

int input_menu, i;

// deklarasi prosedur
void nim_gt_dua();
void nim_highest_lowest();

// deklarasi algoritma
int main()
{
  while (true)
  {
    // system("cls");
    // meminta tipe query data mahasiswa
    printf("\nmasukkan tipe fungsi yang ingin di eksekusi !");
    printf("\n1. Tampilkan mahasiswa dengan NIM > 2.0");
    printf("\n2. Tampilkan 2 mahasiswa dengan NIM tertinggi dan terendah");
    printf("\n3. Keluar dari program");
    printf("\nInput Anda: ");
    scanf("%i", &input_menu);

    // mengecek input menu user
    if (input_menu == 1)
      nim_gt_dua();
    else if (input_menu == 2)
      nim_highest_lowest();
    else if (input_menu == 3)
      break;
    else
      continue;
  }

  // keluar dari program
  printf("\nTerima kasih telah menggunakan program ini !");
  return 0;
}

// definisi fungsi
void nim_gt_dua()
{
  int len_list = sizeof(list_mhs) / sizeof(list_mhs[0]);
  int hasil_pos_kosong = 0;
  Mahasiswa hasil[len_list];

  // mengepush mahasiswa dengan ipk > 2 ke dalam array hasil
  for (i = 0; i < len_list; i++)
  {
    if (list_mhs[i].IPK > 2)
    {
      hasil[hasil_pos_kosong] = list_mhs[i];
      hasil_pos_kosong++;
    }
  }

  // mencetak hasil
  printf("\nMahasiswa dengan IPK > 2.0\n");
  for (i = 0; i < hasil_pos_kosong; i++)
  {
    printf("%i. Nama: %s, NIM: %lli, IPK: %.2f\n", i + 1, hasil[i].nama, hasil[i].NIM, hasil[i].IPK);
  }
  printf("\nPress any button to continue !\n");
  getche();
}

void nim_highest_lowest()
{
  int len_list = sizeof(list_mhs) / sizeof(list_mhs[0]);
  Mahasiswa si_paling_rajin = list_mhs[0];      // mahasiswa dengan IPK tertinggi
  Mahasiswa si_paling_skip_kelas = list_mhs[0]; // mahasiswa dengan IPK terendah

  // meloop seisi array mahasiswa
  for (i = 0; i < len_list; i++)
  {
    // validasi IPK tertinggi
    if (list_mhs[i].IPK > si_paling_rajin.IPK)
    {
      si_paling_rajin = list_mhs[i];
    }

    // validasi IPK terendah
    if (list_mhs[i].IPK < si_paling_skip_kelas.IPK)
    {
      si_paling_skip_kelas = list_mhs[i];
    }
  }

  // mencetak hasil
  printf("\nMahasiswa dengan IPK Tertinggi\n");
  printf("1. Nama: %s, NIM: %lli, IPK: %.2f\n",
         si_paling_rajin.nama, si_paling_rajin.NIM, si_paling_rajin.IPK);
  printf("Mahasiswa dengan IPK Terendah\n");
  printf("2. Nama: %s, NIM: %lli, IPK: %.2f\n",
         si_paling_skip_kelas.nama, si_paling_skip_kelas.NIM, si_paling_skip_kelas.IPK);
  printf("\nPress any button to continue !\n");
  getche();
}
