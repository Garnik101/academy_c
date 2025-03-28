#include <stdio.h>

int main () {
	char ch = 'A';
	char* ptr = &ch;
	printf("the content of the pointer ptr after incrementing is %p.\n", ptr);
	++ptr;
	printf("the content of the pointer ptr before incrementing is %p.\n", ptr);
	return 0;
}
