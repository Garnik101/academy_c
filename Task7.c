#include <stdio.h>
int main () {
	int days;
	printf("Please enter the number of day(s): ");
	scanf("%d", &days);
	printf("%d day(s) is(are) %f year(s)\n", days, days/365.0);
	printf("%d day(s) is(are) %f month(s)\n", days, days/30.0);
	printf("%d day(s) is(are) %d day(s)\n", days, days);
	return 0;
}
