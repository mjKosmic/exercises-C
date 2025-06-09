#include <stdio.h>

/*
 * print Fahrenheit-Celsius table 
 * for fahr = 0, 20, ... 300
 */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;	    /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;	    /* step size */

    /* heading */
    int width = 12;
    int headingIndex = 0;
    printf("Temp Conversion\n");
    while(headingIndex < width) {
	printf("-");
	headingIndex = headingIndex + 1;
    }
    printf("\n");

    fahr = lower;
    while(fahr <= upper) {
	celsius = (5.0/9.0) * (fahr - 32.0);
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr = fahr + step;
    }
}
