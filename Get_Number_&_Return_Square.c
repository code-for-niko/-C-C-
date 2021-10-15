#include <stdio.h>

/* Purpose: Get number from user and return the squared value */

int main ()
{
    int x;
    printf("Enter integer value:\n");
    if (scanf("%d", &x) ==1) {
        printf("The squared value of %d it's %d\n", x, x*x);
    } else {
        printf("Failure.\n");
    }
    return 0;
}

