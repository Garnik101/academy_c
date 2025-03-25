#include <stdio.h>
 
int main () {
	int a = 0;
	int b = 0;
	int sel = 0;
	printf("Please enter a positive number: ");
	while (scanf("%d", &a) != 1 || b < 0) {
 		printf("Please enter a valid number: ");
 		while (getchar() != '\n')
 		;
 	}
	printf("Please enter another number: ");
	while (scanf("%d", &b) != 1 || b < 0) {
		printf("Please enter a valid number: ");
		while (getchar() != '\n')
		;
	}
	printf("Please select the operation:\n");
	printf("1 - AND\n2 - OR\n3 - XOR\n4 - SHIFT LEFT\n5 - SHIFT RIGHT\n");
	printf("Operation number is: ");
	scanf("%d", &sel);
	switch (sel) {
		case 1:
			printf("%d AND %d = %ld\n", a, b, (long)(a & b));
			break;
		case 2:
			printf("%d OR %d = %ld\n", a, b, (long)(a | b));
			break;
		case 3: 
			printf("%d XOR %d = %ld\n", a, b, (long)(a ^ b));
			break;
		case 4:
			printf("%d SHIFT LEFT %d = %ld\n", a, b, (long)(a << b));
			break;
		case 5:
			printf("%d SHIFT RIGHT %d = %ld\n", a, b, (long)(a >> b));
			break;
	}
        return 0;
}
