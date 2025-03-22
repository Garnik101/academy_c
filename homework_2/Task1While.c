#include <stdio.h>

int main () {
	int i = 0;
	do {
	  printf("%d ", i);
	  i++;
	}
	while (i<=10);
	printf("\n");

	i = 10;
	do {
	  printf("%d ", i);
	  i--;
	}
	while (i>=0);
	printf("\n");
	return 0;
}
