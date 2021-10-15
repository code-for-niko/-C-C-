#include <stdio.h>
/* CONVERSION FAHRENHEIT TO CELSIUS */

#define INFERIOR 0
#define SUPERIOR 300
#define PASSO 20

int main()
{
    float fahr, celsius;
    
    for (fahr = INFERIOR; fahr <= SUPERIOR; fahr = fahr + PASSO)

    {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
    }
    return 0;
}
 


    
