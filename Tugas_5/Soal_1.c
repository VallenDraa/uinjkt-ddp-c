#include <stdio.h>



int c;

void test(int *a, int *b) {
  printf("%i", a);
}

int main() {
  int a = 1;
  int b = 2;

  test(&a, &b);

  return 0;
}