// program no 8
//{................}

// deklarasi pustaka
#include <stdio.h>

// deklarasi variabel
int i;
int arr[] = {1, 4, 2, 3, 5, 16, 72, 81, 62, 7, 16, 8, 1};
int n = sizeof(arr) / sizeof(arr[0]);

// algoritma
void print_element(int arr[], int n)
{
  for (i = 1; i < n; i++)
  {
    if (arr[i] > arr[i = n] && arr[i] > arr[i < n])
    {
      printf("%i", arr[i]);
    }
  }
}

int main()
{
  int arr[] = {2, 3, 1, 5, 4, 9, 8, 7, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  return 0;
}
