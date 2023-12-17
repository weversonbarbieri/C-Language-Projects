#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, x;

    printf("Which number you want to see the table: ");
    scanf("%d", &N);

    for (i = 1; i < 11; i++) {
        x = i * N;
        printf("%d x %d = %d\n", i, N, x);

    }




    return 0;
}
