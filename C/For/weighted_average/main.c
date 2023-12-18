#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    double x1, x2, x3, sumx, average;

    printf("How many values do you want to type: ");
    scanf("%d", &N);




    for (i = 0; i < N; i++) {
        printf("Enter 3 numbers: \n");
        scanf("%lf/n", &x1);
        scanf("%lf/n", &x2);
        scanf("%lf/n", &x3);
        x1 = x1 * 2;
        x2 = x2 * 3;
        x3 = x3 * 5;
        average = (x1 + x2 + x3) / 10;
        printf("Average of 3 numbers: %.1lf\n", average);

    }


    return 0;
}
