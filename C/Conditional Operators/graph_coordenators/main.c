#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;

    printf("Enter X value: ");
    scanf("%lf", &x);
    printf("Enter Y value: ");
    scanf("%lf", &y);


    if (y == 0 && x == 0) {
        printf("Origem\n");

    } else if (y > 0 && x > 0) {
        printf("Q1\n");

    } else if (y > 0 && x < 0){
        printf("Q2\n");

    } else if (y < 0 && x < 0) {
        printf("Q3\n");

    } else if (y < 0 && x > 0) {
        printf("Q4\n");

    } else if (y == 0) {
        printf("Axle X\n");

    } else if (x == 0) {
        printf("Axle Y\n");

    }



    return 0;
}
