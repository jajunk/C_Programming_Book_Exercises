#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("This is a simple C program.\n");
    return 0;

    // TODO Add Temp Table Exercise One 1.2 Variables and Arithmetic Expressions

    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20; /* lower limit of temperature scale */
    /* upper limit */
    /* step size */
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
