#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, x;

    printf("How many numbers do you want to type: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Type a number: ");
        scanf("%d", &x);

        if (x > 0 && x % 2 == 0) {
            printf("EVEN POSITIVE\n");
        } else if (x < 0 && x % 2 != 0) {
            printf("ODD NEGATIVE\n");
        } else if (x < 0 && x % 2 == 0) {
            printf("EVEN NEGATIVE\n");
        } else if (x > 0 && x % 2 != 0) {
            printf("ODD POSITIVE\n");
        } else {
            printf("NOT VALID\n");
        }

    }

    return 0;
}
