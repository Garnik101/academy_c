#include <stdio.h>

int main () {
	int a = 0;
	int b = 0;
	int s = 0;
	do {
	printf("Enter the first number of the range: ");
	scanf("%d", &a);
	printf("Enter the last number of the range: ");
	scanf("%d", &b);
	} while (a >= b);

	for (a; a <= b; a++) {
	  if (a % 5 == 0) {
	    s += 1;
	  }
	}
	printf("The number is: %d\n", s);
	return 0;
}
