#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, delta;

    printf("Coefficient a: ");
    scanf("%lf", &a);
    printf("Coefficient b: ");
    scanf("%lf", &b);
    printf("Coefficient c: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - (4 * a * c);

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    } else {
          printf("This equation does not have real numbers\n");

    }


}
