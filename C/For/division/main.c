#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, numerator, denumerator;
    double division;

    printf("How many cases do you to type: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Enter the numerator: ");
        scanf("%d", &numerator);
        printf("Enter the denumerator: ");
        scanf("%d", &denumerator);

        if (numerator < 0) {
           printf("IMPOSSIBLE TO CALCULATE\n");
        } else {
           division = (double) numerator / denumerator;
           printf("Division = %.2lf\n", division);
        }


    }


    return 0;
}
