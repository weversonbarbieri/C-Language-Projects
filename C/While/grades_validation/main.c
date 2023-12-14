#include <stdio.h>
#include <stdlib.h>

int main()
{
    double grade1, grade2, sumgrades, averagegrades;

    printf("Enter the 1st grade: ");
    scanf("%lf", &grade1);

    while (grade1 < 0 || grade1 > 10) {
        printf("Invalid grade! Try again: ");
        scanf("%lf", &grade1);

    }

    printf("Enter the 2st grade: ");
    scanf("%lf", &grade2);

    while (grade2 < 0 || grade2 > 10) {
        printf("Invalid grade! Try again: ");
        scanf("%lf", &grade2);
    }

    sumgrades = grade1 + grade2;
    averagegrades = sumgrades / 2;

    printf("Average grade = %.2lf\n", averagegrades);
    return 0;
}
