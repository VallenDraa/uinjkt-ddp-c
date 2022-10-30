// program ini akan mengkonversi bilangan bulat k bentuk romawi
#include <stdio.h>
#include <string.h>

// deklarasi variable
int input_int;

// deklarasi fungsi
char *bentuk_romawi(int bil);

// deklarasi algoritma
int main()
{
  // meminta masukan dari user
  do
  {
    printf("Masukan bilangan antara 1 - 10 untuk dikonversi ke bentuk romawi:");
    scanf("%i", &input_int);
  } while (input_int > 10 || input_int <= 0);

  // mencetak hasil konversi angka romawi
  printf("Angka Romawinya dari %i adalah %s", input_int, bentuk_romawi(input_int));

  return 0;
}

// definisi fungsi
char *bentuk_romawi(int bil)
{
  char romawi[][5] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};

  return romawi[bil == 0 ? bil : bil - 1];
}
