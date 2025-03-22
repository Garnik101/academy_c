#include <stdio.h>

int main () {
	int n = 0;
	int c = 0;
	char ch = '*';
	do {
	  printf("Please enter a positive number: ");
	  scanf("%d", &n);
	} while (n < 0);	
	for (int row = 1; row <= n; row++) {
	  if ( row == 1 || row == n) {
	    for (int c = 1; c <= n; c++) {
	      printf("%c ", ch); 
	    }
	  } else {
	    printf("*");
	    for (c = 1; c <= n-2; c++) {
	        printf("  ");
	    }
	    printf(" *");
	  }
	  printf("\n");
	}
	return 0;
}
