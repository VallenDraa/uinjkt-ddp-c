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
  char hasil[3];

  if (bil == 1)
  {
    return "I";
  }
  else if (bil == 2)
  {
    return "II";
  }
  else if (bil == 3)
  {
    return "III";
  }
  else if (bil == 4)
  {
    return "IV";
  }
  else if (bil == 5)
  {
    return "V";
  }
  else if (bil == 5)
  {
    return "V";
  }
  else if (bil == 6)
  {
    return "VI";
  }
  else if (bil == 7)
  {
    return "VII";
  }
  else if (bil == 8)
  {
    return "VIII";
  }
  else if (bil == 9)
  {
    return "IX";
  }
  else if (bil == 10)
  {
    return "X";
  }
}
