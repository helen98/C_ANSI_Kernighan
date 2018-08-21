#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300; floating-point version */
int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    celsius = lower;
    printf("Celsius to Fahrenheit Table\n");
    while (celsius <= upper){
        fahr = celsius * (9.0/5.0) + 32.0;
        /* fahr - at least 3 characters wide, with no decimal
            point and no fraction digits
            celsius - at least 6 characters wide, with 1 digit 
            after the decimal point */  
        printf("%3.0f\t%6.1f\n", celsius, fahr);    
        celsius = celsius + step;
    }
}