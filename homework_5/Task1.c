#include <stdio.h>

int main () {
	int n = 7;
	int* ptr = &n;
	printf("The address of a is %p.\n", &n);
	printf("The address of a is %p.\n", ptr);
	return 0;
}
