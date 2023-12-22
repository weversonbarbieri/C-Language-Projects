#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;

    printf("How many numbers will have each vector? ");
    scanf("%d", &N);

    int A[N];
    int B[N];
    int sum[N];

    printf("Enter the numbers of vector A:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the numbers of vector B:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    printf("Vector result:\n");
    for (i = 0; i < N; i++) {
        sum[i] = A[i] + B[i];
        printf("%d\n", sum[i]);
    }



    return 0;
}
