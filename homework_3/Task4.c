#include <stdio.h>

int main () {
	int n = 0;
	int c = 0;
	do {
	  printf("Please enter a positive number: ");
	  scanf("%d", &n);
	} while (n < 0);	
	for (int row = 1; row <= n; row++) {
	  for (int c = 1; c <= n; c++) {
	    printf("*");
	  }
	  printf("\n");
	}
	return 0;
}
