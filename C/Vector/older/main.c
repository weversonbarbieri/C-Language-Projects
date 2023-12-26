#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int N, i, greater, older;

    printf("How many people will you type? ");
    scanf("%d", &N);

    int age[N];
    char names[N][50];

    for (i = 0; i < N; i++) {
        printf("Data of the %da person:\n", i+1);
        printf("Name: ");
        limpar_entrada();
        gets(names[i]);
        printf("Age: ");
        scanf("%d", &age[i]);

    }
    greater = age[0];

    for (i = 0; i < N; i++) {
        if (age [i] > greater) {
            greater = age[i];
            older = names[i];
        }
    }
    printf("The older person: %s", older);


    return 0;
}
