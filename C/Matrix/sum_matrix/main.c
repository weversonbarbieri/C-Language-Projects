#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N, i, j;

    printf("Quantity of lines: ");
    scanf("%d", &M);
    printf("Quantity of columns: ");
    scanf("%d", &N);

    int matrixA[10][10], matrixB[10][10], matrixC[10];

    printf("Enter the numbers of matrix A:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Element [%d,%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the numbers of matrix B:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Element [%d,%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }


    printf("Matrix sum:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            matrixC[i] = matrixA[i][j] + matrixB[i][j];
            printf("%d ", matrixC[i]);
        }
        printf("\n");
    }








    return 0;
}
