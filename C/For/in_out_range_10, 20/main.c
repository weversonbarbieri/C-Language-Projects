#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, x, sumin, sumout;

    printf("How many numbers are you going to enter: ");
    scanf("%d", &N);

    sumin = 0;
    sumout = 0;
    for (i = 0; i < N; i++) {
        printf("Enter a number: ");
        scanf("%d", &x);
        if (x >= 10 && x <= 20) {
            sumin = sumin + 1;
        } else {
            sumout = sumout + 1;
        }
    }

    printf("%d between 10 - 20\n", sumin);
    printf("%d not between 10 - 20\n", sumout);


    return 0;
}
