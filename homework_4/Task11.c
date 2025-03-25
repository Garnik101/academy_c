#include <stdio.h>
 
int main () {
	int num = 0;
	int n = 0;
	int mask = 0;
	printf("Please enter a positive number to shift: ");
	while (scanf("%d", &num) != 1 || num < 0) {
 		printf("Please enter a valid number: ");
 		while (getchar() != '\n')
 		;
 	}
	printf("Please enter the amount of shift: ");
	while (scanf("%d", &n) != 1 || n < 0) {
		printf("Please enter a valid number: ");
		while (getchar() != '\n')
		;
	}
	printf("Please enter a positive number of the mask: ");
	while (scanf("%d", &mask) != 1 || mask < 0) {
		printf("Please enter a valid number: ");
		while (getchar() != '\n')
		;
	}
	printf("\n");
	for (int i = 1; i <= n; i++) {
		int shift = mask << i;
		int a = shift & num;
		printf("Ieration %d:\n", i);
		printf("Shifted number is %d,\n", shift);
		printf("AND operation result is %d.\n\n", a);
	}
        return 0;
}
