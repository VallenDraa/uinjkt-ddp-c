#include <stdio.h>

long long factorial(int x) {
	return x == 1 ? x : x * factorial(x - 1);
}

int main () {
	printf("%i", factorial(5));
	return 0;
}