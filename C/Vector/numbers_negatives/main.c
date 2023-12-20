#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    int vet[10];

    printf("How many numbers do you want to type? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Enter 1 number: ");
        scanf("%d", &vet[i]);

    }

    printf("Negative Numbers:\n");
    for (i = 0; i < N; i++) {
        if (vet[i] < 0) {
            printf("%d\n", vet[i]);
        }
    }







    return 0;
}
