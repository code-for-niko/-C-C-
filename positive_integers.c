#include <stdio.h>
/* Copia inteiros do input para output */

int main ()
{
    int v;
    int unused __attribute__((unused));

    unused = scanf("%d", &v);

    while (v >= 0)
    {
    printf("%d\n", v);

    unused = scanf("%d", &v);
    }
    return 0;
}
