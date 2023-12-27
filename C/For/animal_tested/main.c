#include <stdio.h>



int main()
{
    int N, i, quantity, sumF, sumM, sumR, sumAnimals;
    char animal;
    double percentageF, percentageM, percentageR;

    printf("How many animals do you want to type? ");
    scanf("%d", &N);


    sumF = 0;
    sumM = 0;
    sumR = 0;
    sumAnimals = 0;
    for (i = 0; i < N; i++) {
        printf("Quantity of experiences: ");
        scanf("%d", &quantity);
        printf("Animal type: ");
        scanf(" %c", &animal);
        sumAnimals = sumAnimals + quantity;

        if (animal == 'F') {
            sumF = sumF + quantity;
        } else if (animal == 'M') {
            sumM = sumM + quantity;
        } else {
            sumR = sumR + quantity;
        }
    }

    percentageF = (100.0 * sumF) / sumAnimals;
    percentageM = (100.0 * sumM) / sumAnimals;
    percentageR = (100.0 * sumR) / sumAnimals;

    printf("\n");
    printf("FINAL REPORT:\n");
    printf("Total of experiences: %d\n", sumAnimals);
    printf("Total of Rabbits: %d\n", sumR);
    printf("Total of Mouses: %d\n", sumM);
    printf("Total of Frogs: %d\n", sumF);
    printf("Percentage of Rabbits: %.2lf\n", percentageR);
    printf("Percentage of Mouses: %.2lf\n", percentageM);
    printf("Percentage of Frogs: %.2lf\n", percentageF);





    return 0;
}
