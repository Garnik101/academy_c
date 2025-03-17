#include <stdio.h>
int main () {
	int a=5;
	int b=3;
	int c;
	printf("The value of a is %d\n", a);
	printf("The value of b is %d\n", b);
	c = a;
	a = b;
	b = c;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}
