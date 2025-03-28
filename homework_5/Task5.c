#include <stdio.h>

int main () {
	int a = 5;
	int* ptr = NULL;
	if (ptr == 0) printf("ptr pointer is NULL.\n");
	ptr = &a;
	printf("The value of a is %d.\n", *ptr);
	return 0;
}
