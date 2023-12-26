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

    printf("How many people do you want to enter? ");
    scanf("%d", &N);

    int ages[N];
    double heights[N];
    char names[N][50];


    for (i = 0; i < N; i++) {
        printf("Enter the %da people's data. \n", i + 1);
        printf("Name: ");
        limpar_entrada();
        gets(names[i]);
        printf("Age: ");
        scanf("%d", &ages[i]);
        printf("Height: ");
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
    printf("People being less then 16 years old: %.1lf %%\n", Ypercentage);

    for (i = 0; i < N; i++) {
        if (ages[i] < 16) {
            printf("%s\n", names[i]);
        }
    }



    return 0;
}
