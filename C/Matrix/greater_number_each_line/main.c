#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, greater;

    printf("Matrix order: ");
    scanf("%d", &N);

    int matrix[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Element [%d,%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Great number of each line:\n");

    for (i = 0; i < N; i++){

        for (j = 0; j < N; j++) {
            if (matrix[i][j] > greater)
                greater = matrix[i][j];
        }
        printf("%d\n", greater);
        greater = matrix[i][j];
    }


    return 0;
}
