#include <stdio.h>
 
int main () {
	int num = 0;
	int pow = 0;
	printf("Please enter a positive number to multiply or divide: ");
	while (scanf("%d", &num) != 1 || num < 0) {
		printf("Please enter a valid number: ");
		while (getchar() != '\n')
		;
	}
	printf("Please enter a positive power of 2: ");
	while (scanf("%d", &pow) != 1 || num < 0) {
		printf("Please enter a valid number: ");
		while (getchar() != '\n')
		;
	}
	printf(" %d * 2^%d = %d\n", num, pow, num << pow);
	printf(" %d / 2^%d = %d\n", num, pow, num >> pow);
        return 0;
}
