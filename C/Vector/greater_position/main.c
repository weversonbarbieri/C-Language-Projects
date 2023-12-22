#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, position;
    double greater;

    printf("How many numbers do you want to type? ");
    scanf("%d", &N);

    double numbers[N];

    for (i = 0; i < N; i++) {
        printf("Enter 1 number: ");
        scanf("%lf", &numbers[i]);
    }
    greater = numbers[0];
    position = 0;
    for (i = 0; i < N; i++) {
        if (numbers[i] > greater) {
            greater = numbers[i];
            position = i;
        }

    }
    printf("\n");
    printf("Greater number = %.1lf\n", greater);
    printf("Position of the greater = %d\n", position);


    return 0;
}
