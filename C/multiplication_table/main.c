#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i , multiplication;

    printf("Which multiplication table do you want? ");
    scanf("%d", &n);

    for (i = 1; i < 11; i++) {
        multiplication = i * n;
        printf("%d x %d = %d\n", n, i, multiplication);

    }

    return 0;
}
