#include <stdio.h>
int main () {
	int days;
	printf("Please enter the number of days: ");
	scanf("%d", &days);
	printf("%d day(s) are %f year(s)\n", days, days/365.25);
	printf("%d day(s) are %f week(s)\n", days, days/7.0);
	printf("%d day(s) are %d day(s)\n", days, days);
	return 0;
}
