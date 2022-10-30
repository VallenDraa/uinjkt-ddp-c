/* Program ini akan mengklipping pixel agar nilai input berada pada interal 0-255 */

// DEKLARASI PUSTAKA
#include <stdio.h>

int main()
{
  // DEKLARASI VARIABLE
  int pixel, hasil;

  printf("Masukkan Nilai Pixel: ");
  scanf("%i", &pixel);

  if (pixel > 255)
  {
    hasil = 255;
  }
  else if (pixel < 0)
  {
    hasil = 0;
  }
  else
  {
    hasil = pixel;
  }
  printf("\nHasil: %i", hasil);
  return 0;
}