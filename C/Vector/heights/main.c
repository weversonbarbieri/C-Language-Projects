#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int i, N, younger;
    double averageH, sumH, Ypercentage;
    int ages[N];
    double heights[N];
    char names[N][50];




    printf("How many people do you want to enter? ");
    scanf("%d", &N);


    for (i = 0; i < N; i++) {
        printf("Enter the %da people's data. \n", i + 1);
        printf("Name: ");
        limpar_entrada();
        scanf("%c\n", &names[i]);
        printf("Age: ");
        limpar_entrada();
        scanf("%d", &ages[i]);
        printf("Height: ");
        limpar_entrada();
        scanf("%lf", &heights[i]);

    }

    sumH = 0;
    for (i = 0; i < N; i++) {
        sumH = sumH + heights[i];
    }

    averageH = sumH / N;
    printf("Average height: %.2lf\n", averageH);



    younger = 0;
    for (i = 0; i < N; i++) {
        if (ages[i] < 16) {
           younger = younger + 1;
        }


    }
    Ypercentage = 100.0 * younger / N;
    printf("People being less then 16 years old: %.1lf\n", Ypercentage);



    return 0;
}
