#include <stdio.h>

int main () {
	int n = 0;
	int a = 1;
	do {
	  printf("Please enter a number: ");
	  scanf("%d", &n);
	} while (n < 0);
	for (int row = 1; row <= n; row++) {
	  for (int c = 1; c <= row; c++, a++) {
	    printf("%d ", a);
	  }
	  printf("\n");
	}
	return 0;
}
