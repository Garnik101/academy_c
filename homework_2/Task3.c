#include <stdio.h>

int main () {
	for (int a = 0; a <= 100; a++) {
	  if (a % 3 == 0 && a % 5 == 0) {
	    printf("FizzBuzz ");
	  } else if (a % 3 == 0) {
	    printf("Fizz ");
	  } else if (a % 5 == 0) {
	    printf("Buzz ");
	  } else {
	    printf("FizzBuzz ");
	  }
	}
	return 0;
}
