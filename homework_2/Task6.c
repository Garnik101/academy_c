#include <stdio.h>

int main () {
	int a = 0;
	int n = 0;
	printf("Enter a number: ");
	scanf("%d",  &n);
	while ( n > 0) {
	  a = n % 10;
	  printf("%d", a);
	  n /= 10;
	}
	printf("\n"); 
	return 0;
}
