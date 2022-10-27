// Program no 7
//{.........................}

// Deklarasi pustaka
#include <stdio.h>
#include <math.h>

// Deklarasi variabel
int i;
int j;
int banyak;
int grade = 0;
int grades[5] = {0}; // Init
int sum = 0;
float deviation_sum;
float mean;
float simpangan_baku;

// Algoritma
int main()
{
  printf("masukan banyak angka: ");
  scanf("%d", &banyak);

  for (i = 0; i < banyak; i++)
  {
    printf("angka ke-%d : ", (i + 1));
    scanf("%d", &grade);

    switch (grade)
    {
    case 0:
      grades[0]++;
      break;
    case 1:
      grades[1]++;
      break;
    case 2:
      grades[2]++;
      break;
    case 3:
      grades[3]++;
      break;
    case 4:
      grades[4]++;
      break;
    case 5:
      grades[5]++;
    }
    sum += grade;
  }

  mean = sum / banyak;
  printf("mean: %.2f \n", mean);

  for (i = 0; i <= 5; i++)
  {
    while (grades[i] == 0)
    {
      i++;
    }
    for (j = 0; j < grades[i]; j++)
    {
      deviation_sum += (i - mean) * (i - mean);
      printf("%d,%d\n", i, j);
    }
  }

  simpangan_baku = sqrt(deviation_sum / banyak - 1);
  printf("simpangan : %.2f\n", simpangan_baku);
}
