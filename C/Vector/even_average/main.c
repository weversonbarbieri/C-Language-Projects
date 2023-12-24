#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, sum, sumE;
    double average;

    printf("How many numbers will have the vector? ");
    scanf("%d", &N);

    int vet[N];

    for (i = 0; i < N; i++) {
        printf("Enter 1 number: ");
        scanf("%d", &vet[i]);
    }
    sum = 0;
    sumE = 0;
    for (i = 0; i < N; i++) {
        if (vet[i] % 2 == 0) {
            sum = sum + vet[i];
            sumE++;
        }
    }

    if (sum == 0) {
        printf("No even number\n");
    } else {
        average = (double) sum / sumE;
        printf("Average even numbers: %.1lf\n", average);

    }





    return 0;
}
