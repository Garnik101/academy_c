#include <stdio.h>

int main () {
	int i = 1;
	int n = 0;
	int p = 1;
	printf("Please enter a number: ");
	scanf("%d", &n);
	for (i; i <= n; i++) {
	  p *= i;
	} 
	printf("%d! = %d", n, p);
	return 0;
}
