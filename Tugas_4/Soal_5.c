// Program ini akan menukar nilai pada array a dan b
#include <stdio.h>

// Deklarasi variabel
int a[] = {11, 12, 13, 14, 15, 16};
int b[] = {1, 2, 3, 4, 5, 6};
int temp;

// prosedur
void print_arr(int arr[]);
void tukar_elemen(int i);

int main()
{
  int x;
  printf("sebelum : \n");
  print_arr(a);
  printf("\n");
  print_arr(b);

  tukar_elemen(6);

  printf("\nsesudah : \n");
  print_arr(a);
  printf("\n");
  print_arr(b);
  printf("\n");

  return 0;
}

// definisi prosedur
void print_arr(int arr[])
{
  int len = sizeof(arr) / sizeof(arr[0]);
  int i;

  for (i = 0; i < len; i++)
  {
    printf("%i ,", arr[i]);
  }
}

void tukar_elemen(int i)
{
  temp = a[i];
  a[i] = b[i]; // menukar nilai a
  b[i] = temp; // menukar nilai b
  if (i != 0)
  {
    tukar_elemen(i - 1);
  }
}