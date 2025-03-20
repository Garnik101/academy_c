#include <stdio.h>
int main () {
	float c;
	printf("PLease enter the tempreture in Celsius: ");
	scanf("%f", &c);
	printf("%f Celcius is %f Fahrenheit\n", c, (c*9/5)+32);
	return 0;
}
