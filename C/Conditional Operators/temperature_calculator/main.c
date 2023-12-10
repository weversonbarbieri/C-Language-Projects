#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temperature;
    double celsius, fahrenheit;

    printf("Enter which temperature you want to calculate (C/F): ");
    scanf("%c", &temperature);


    if (temperature == 'F') {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        celsius = 0.555 * (fahrenheit - 32);
        printf("The temperature in Celsius is: %.2lf\n", celsius);

    } else if (temperature == 'C') {
         printf("Enter the temperature in Celsius: ");
         scanf("%lf", &celsius);
         fahrenheit = celsius * 1.8 + 32;
         printf("The temperature in Fahrenheit: is: %.2lf\n", fahrenheit);


    }



    return 0;
}
