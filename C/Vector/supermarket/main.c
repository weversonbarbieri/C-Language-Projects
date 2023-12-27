#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int N, i, less10, between1020, more20;
    double profit, percentage, sumPur, sumS, sumPro;

    printf("How many products do you want to type? ");
    scanf("%d", &N);

    double sell[N], purchased[N];
    char product[N][50];

    less10 = 0;
    between1020 = 0;
    more20 = 0;
    sumPur = 0;
    sumS = 0;
    sumPro = 0;
    for (i = 0; i < N; i++) {
        printf("Product %d\n", i + 1);
        printf("Product name: ");
        limpar_entrada();
        gets(product[i]);
        printf("Purchase price: ");
        scanf("%lf", &purchased[i]);
        printf("Sell price: ");
        scanf("%lf", &sell[i]);
    }

    for (i = 0; i < N; i++) {
        profit = sell[i] - purchased[i];
        sumPro = sumPro + profit;
        percentage = (100.0 * profit) / sell[i];
        if (percentage < 10) {
           less10++;
        } else if (percentage > 10 && percentage < 20) {
           between1020++;
        } else {
           more20++;
        }

    }

    for (i = 0; i < N; i++) {
        sumPur = sumPur + purchased[i];
        sumS = sumS + sell[i];
    }
    printf("\n");
    printf("REPORT:\n");
    printf("Profit less than 10%%: %d\n", less10);
    printf("Profit between 10%% and 20%%: %d\n", between1020);
    printf("Profit under 20%%: %d\n", more20);
    printf("Total purchased: %.2lf\n", sumPur);
    printf("Total sold: %.2lf\n", sumS);
    printf("Total profit: %.2lf\n", sumPro);



    return 0;
}
