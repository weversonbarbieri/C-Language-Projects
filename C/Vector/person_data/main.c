#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int N, i, Qmale, Qfemale;
    double higher, lower, average, sumF;

    printf("How many persons do you to type? ");
    scanf("%d", &N);

    double height[N];
    char genre[N];

    sumF = 0;
    Qmale = 0;
    Qfemale = 0;
    for (i = 0; i < N; i++) {
        printf("Height of the %da person: ", i + 1);
        scanf("%lf", &height[i]);
        printf("Genre of the %da person: ", i + 1);
        limpar_entrada();
        scanf("%c", &genre[i]);
    }

    higher = height[0];
    lower = height[0];
    for (i = 0; i < N; i++) {
        if (height[i] > higher) {
            higher = height[i];
        } else if (height[i] < lower) {
            lower = height[i];
        }
    }


    for (i = 0; i < N; i++) {
        if (genre[i] == 'F') {
            sumF = sumF + height[i];
            Qfemale = Qfemale + 1;
        } else {
            Qmale = Qmale + 1;
        }
    }

    average = (double)sumF / Qfemale;
    printf("Higher height = %.2lf\n", higher);
    printf("Lower height = %.2lf\n", lower);
    printf("Average of woman's height: %.2lf\n", average);
    printf("Men's quantity: %d\n", Qmale);





    return 0;
}
