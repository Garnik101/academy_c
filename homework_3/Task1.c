#include <stdio.h>

int main () {
	int n = 0;
	int i = 1;
	int s = 0;
	do { 
	  printf("Please enter a positive number: ");
	  scanf("%d", &n);
 	} while (n < 0);   
	for (i ; i <= n/2; i++) {
	  if (n % i == 0) {
	    s += i;
	  }  
	}
	if (s == n) {
	printf("%d is a perfect number.\n", n);
	} else printf ("%d is not a perfect number.\n", n);
	return 0;
}
