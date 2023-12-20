#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N, i;
    double vet[10], sum, average;

    printf("How many numbers do you want to type: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Enter 1 number: ");
        scanf("%lf", &vet[i]);
    }
    printf("Values = ");
    for (i = 0; i < N; i++) {
        printf("%.1lf ", vet[i]);
    }

    printf("\n");
    sum = 0;
    for (i = 0; i < N; i++) {
        sum = sum + vet[i];

    }
    printf("Sum = %.2lf\n", sum);
    average = sum / N;
    printf("Average = %.2lf\n", average);




    return 0;
}
