#include <stdio.h>

/* Counts numbers of elements of a list of positive numbers */

int main ()
{
    int x;
    int unused __attribute__((unused));
    long count;

    count = 0;
    unused = scanf("%d", &x);
    while (x >= 0) {
    count++;
    unused = scanf("%d", &x);
    }
    printf("%ld\n", count);
    return 0;
}


