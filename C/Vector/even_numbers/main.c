#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, sumE;

    printf("How many numbers do you want to type? ");
    scanf("%d", &N);

    int even[N];

    for (i = 0; i < N; i++) {
        printf("Enter 1 number: ");
        scanf("%d", &even[i]);
    }
    printf("\n");
    printf("Even numbers:\n");
    for (i = 0; i < N; i++) {
        if (even[i] % 2 == 0) {
            printf("%d ", even[i]);
        }
    }
    printf("\n");
    printf("\n");
    sumE = 0;
    for (i = 0; i < N; i++) {
        if (even[i] % 2 == 0) {
            sumE++;
        }
    }

    printf("Even quantity = %d\n", sumE);



    return 0;
}
