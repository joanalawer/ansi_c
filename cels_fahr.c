#include <stdio.h>
/* print Celsius-Fahrenheit table 
ffor fahr = 0, 20, ..., 300; floating point version */
main()
{
int fahr, cels;
int lower, upper, step;

lower = 0; 	/* lower limit of temperature table */
upper = 300;	/* upper limit */
step = 20;	/* step size */

celsius = lower;
while (celsius <= upper) {
    celsius = (9.0/5.0) * (cels + 32.0);
    printf("Table converting Celsius to Fahrenheit\n")
    printf("%3.0f\t%6. 1f\n", cels, fahr);
    cels = cels + step;
}
}
