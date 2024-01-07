#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N, i, j;

    printf("Quantiy of lines: ");
    scanf("%d", &M);
    printf("Quantity of columns: ");
    scanf("%d", &N);

    int matrix[M][N];

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Element [%d,%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Negative numbers:\n");
    for (i = 0; i < M; i++) {
         for (j = 0; j < N; j++){
             if (matrix[i][j] < 0){
             printf("%d\n", matrix[i][j]);
            }
         }

    }



    return 0;
}
