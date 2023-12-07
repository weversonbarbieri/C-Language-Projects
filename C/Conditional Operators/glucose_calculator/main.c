#include <stdio.h>
#include <stdlib.h>

int main()
{
    double glucose;
    char classification[20];

    printf("Enter the glucose: ");
    scanf("%lf", &glucose);

    if (glucose <= 100) {
        printf("Classification: normal\n");

    } else if (glucose > 100 && glucose <= 140) {
        printf("Classification: elevated\n");

    } else {
        printf("Classification: with diabetes\n");
    }

    return 0;
}
