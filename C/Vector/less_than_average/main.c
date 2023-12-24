#include <stdio.h>
#include <stdlib.h>

int main()
{


    int N, i;
    double average, sum;

    printf("How many numbers do you want to type? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Enter 1 number: ");
        scanf("%lf", &vet[i]);
    }

    sum = 0;
    for (i = 0; i < N; i++) {
        sum = sum + vet[i];
    }

    printf("\n");
    average = sum / N;
    printf("Vector average = %.3lf\n", average);

    printf("Numbers below average:\n");
    for (i = 0; i < N; i++) {
        if (vet[i] < average) {
           printf("%.1lf\n", vet[i]);
        }
    }


    return 0;
}
