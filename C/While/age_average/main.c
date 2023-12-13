#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, sumages, Tages;
    double average;

    sumages = 0;
    Tages = 0;
    printf("Enter the ages:\n");
    scanf("%d", &age);

    if (age < 0) {

            printf("IMPOSSIBLE TO CALCULATE\n");
        } else {
        while (age > 0) {
        sumages = sumages + age;
        Tages = Tages + 1;
        scanf("%d", &age);

    }

    average = (double) sumages / Tages;
    printf("The average of giving ages is = %.2lf", average);
        }


    return 0;
}
