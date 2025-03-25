#include <stdio.h>
 
int main () {
	int num = 0;
	printf("Please enter a positive number: ");
	while (scanf("%d", &num) != 1 || num < 0) {
		printf("Please enter a valid number: ");
		while (getchar() != '\n')
		;
	}
	for (int i = 1; i <= 32; i++) {
		if (num & (1 << i - 1)) {
			printf("%2dth bit is 1.\n\n", i);
		} else {
			printf("%2dth bit is 0.\n\n", i);
		}
	}
        return 0;
}
