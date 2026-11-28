/*
 * Assignment: Convert Celsius to Fahrenheit using double.
 * Course: Computer Programming I - Module 3
 */

#include <stdio.h>

int main(void)
{
    double celsius;
    double fahrenheit;

    printf("Enter temperature in Celsius: ");

    if (scanf("%lf", &celsius) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("%.2f degrees Celsius is %.2f degrees Fahrenheit.\n",
           celsius, fahrenheit);

    return 0;
}
