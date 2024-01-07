#include <stdio.h>
#include <stdlib.h>

int main()
{
    //M = I(lines) , N = J (columns)
    int N, i, j, Nnegatives;

    printf("Which will be the Matrix order? ");
    scanf("%d", &N);

    int mat[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Element [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Main Diagnogal:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", mat[i][i]);
    }
    printf("\n");

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] < 0)
                Nnegatives++;
        }
    }

    printf("Quantity of negative numbers = %d\n", Nnegatives);









    return 0;
}
