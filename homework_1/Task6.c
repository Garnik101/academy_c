#include <stdio.h>
int main () {
	int a;
	printf("Please enter the number of second(s): ");
	scanf("%d", &a);
	printf("%d second(s) is(are) %f hour(s)\n", a, a/3600.0);
	printf("%d second(s) is(are) %f minute(s)\n", a, a/60.0);
	printf("%d second(s) is(are) %d second(s)\n", a, a);
	return 0;
}
