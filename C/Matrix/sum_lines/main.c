#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N, i, j, vector;

    printf("Quantity of lines: ");
    scanf("%d", &M);
    printf("Quantity of Columns: ");
    scanf("%d", &N);

    double matrix[M][N];
    double vet[i];


    for (i = 0; i < M; i++) {
            printf("Elements of the %da. line:\n", i + 1);

        for (j = 0; j < N; j++) {
            scanf("%lf", &matrix[i][j]);

        }
    }
    vet[i] = 0;
    printf("Vector generated:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
        vet[i] = vet[i] + matrix[i][j];
        }
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}
