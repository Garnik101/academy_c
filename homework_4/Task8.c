#include <stdio.h>
 
int main () {
	char ch = 0;
	do {
		printf("Please enter a letter: ");
		ch = getchar();
		while (getchar() != '\n')									// Clearing the buffer
		;
	} while (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')));
	if (ch & 32) {
		ch ^= 32;
		printf("The lowercase letter corresponding to the entered uppercase letter is %c\n", ch);
	} else {
		ch |= 32;
		printf("The uppercase letter corresponding to the entered lowercase letter is %c\n", ch);
	}
        return 0;
}
