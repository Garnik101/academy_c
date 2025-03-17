#include <stdio.h>
int main () {
        char a;
        printf("Please enter a uppercase letter: ");
        scanf("%c", &a);
        a+=32;
        printf("Lowercase: %c \n", a);
        return 0;
}

