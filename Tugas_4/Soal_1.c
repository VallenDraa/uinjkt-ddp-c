#include <stdio.h>

int n;
int c;
int s;
int alamat;

int main()
{
  printf("masukan jumlah array: ");
  scanf("%i", &n);
  int a[n];

  for (c = 1; c <= n; c++)
  {
    printf("a[%i]: ", c);
    scanf("%i", &a[c]);
  }

  printf("masukan element: ");
  scanf("%i", &s);

  c = 1;

  while ((c <= n) && (a[c] != s))
    c++;

  alamat = s ? c : 0;
  a[c] = s ? c : 0;
  printf("element %i ada pada index %i\n", s, alamat);
}
