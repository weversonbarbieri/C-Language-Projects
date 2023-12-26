#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int N, i;
    double average;

    printf("How many students do you want to enter? ");
    scanf("%d", &N);

    double gradeA[N], gradeB[N];
    char names[N][50];

    for (i = 0; i < N; i++) {
        printf("Enter the data of the %do student: \n", i + 1);
        limpar_entrada();
        gets(names[i]);
        scanf("%lf", &gradeA[i]);
        scanf("%lf", &gradeB[i]);
    }
    printf("Students approved:\n");
    for (i = 0; i < N; i++) {
        average = (gradeA[i] + gradeB[i]) / 2;
        if (average >= 6) {
           printf("%s\n", names[i]);
        }
    }


    return 0;
}
