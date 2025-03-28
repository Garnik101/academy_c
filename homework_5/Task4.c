#include <stdio.h>

int main () {
	int a = 10;
	int b = 5;
	printf("Initial values of the variables are %d, %d.\n", a, b);
	int* ptr = &a;
	*ptr += b;
	ptr = &b;
	*ptr = a - b;
	ptr = &a;
	*ptr = a - b;
	printf("Swaped values of the variables are %d, %d.\n", a, b);
	return 0;
}
