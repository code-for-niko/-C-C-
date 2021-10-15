#include <stdio.h>

/* Objetivo: vamos pedir um inteiro ao utilizador e devolver o quadrado desse número */

int main ()
{
    int x;
    printf("Introduza um valor inteiro:\n");
    if (scanf("%d", &x) ==1) {
        printf("O quadrado de %d é %d\n", x, x*x);
    } else {
        printf("Falha.\n");
    }
    return 0;
}

