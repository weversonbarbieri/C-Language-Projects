#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;

    printf("Enter 3 disctances: \n");
    scanf("%lf\n", &a);
    scanf("%lf\n", &b);
    scanf("%lf", &c);

    if (a > b && a > c) {
        printf("Greater distance is: %.2lf\n", a);

    } else if (b > a && b > c) {
        printf("Greater distance is: %.2lf\n", b);
    } else {
        printf("Great distance is: %.2lf\n", c);
    }


    return 0;
}
