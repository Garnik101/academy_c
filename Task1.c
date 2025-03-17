#include <stdio.h>
int main () {
	char a;
	printf("Please enter a lowercase letter: ");
	scanf("%c", &a);
	a-=32;
	printf("Uppercase: %c \n", a);
	return 0;
}

