#include <stdio.h>

int main () {
	int a = 7;
	int b = 5;
	int* ptr = &a;
	printf("a = %d\n", *ptr);
	*ptr = b;
	printf("a = %d\n", *ptr);
	return 0;
}
