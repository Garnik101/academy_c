#include <stdio.h>

int main () {
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
 	int e = 0;
	int f = 0; 
	printf("Please enter a number: ");
	scanf("%d", &n);
	if (n >= 0 && n < 10) {
	  printf("The number's digit is %d.\n", n);
	} else if (n >= 10 && n < 100) {
	  a = n / 10;
	  b = n - (a * 10);
	  printf("The number's digits are %d, %d.\n", a, b);
	} else if (n >= 100 && n < 1000) {
	  a = n / 100;
	  b = (n - a * 100) / 10;
	  c = n - (a * 100) - (b * 10);
	  printf("The number's digits are %d, %d, %d.\n", a, b, c);
	} else if (n >= 1000 && n < 10000) {
	  a = n / 1000;
	  b = (n - (a * 1000)) / 100;
	  c = (n - (a * 1000) - (b * 100)) / 10;
	  d = n - (a * 1000) - (b * 100) - (c * 10);
	  printf("The number's digits are %d, %d, %d, %d.\n", a, b, c, d);
	} else if (n >= 10000 && n < 100000) {
	  a = n / 10000;
	  b = (n- (a * 10000)) / 1000;
	  c = (n - (a * 10000) - (b * 1000)) / 100;
	  d = (n - (a * 10000) - (b * 1000) - (c * 100)) / 10;
	  e = n - (a * 10000) - (b * 1000) - (c * 100) - (d * 10);
	  printf("The number's digits are %d, %d, %d, %d, %d.\n", a, b, c, d, e);
	} else if (n >= 100000 && n < 1000000) {
	  a = n / 100000;
	  b = (n -(a * 100000)) / 10000;
	  c = (n - (a * 100000) - (b * 10000)) / 1000;
	  d = (n - (a * 100000) - (b * 10000) - (c * 1000)) / 100;
	  e = (n - (a * 100000) - (b * 10000) - (c * 1000) - (d * 100)) / 10;
	  f = n - (a * 100000) - (b * 10000) - (c * 1000) - (d * 100) - (e * 10);
	  printf("The number's digits are %d, %d, %d, %d, %d, %d.\n", a, b, c, d, e, f);
	} 
	return 0;
}
