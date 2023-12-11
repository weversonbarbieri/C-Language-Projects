#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter 2 integer numbers: \n");
    scanf("%d\n", &a);
    scanf("%d", &b);

    if (a % b == 0 || b % a == 0) {

        printf("The numbers are multiples\n");
    } else {
        printf("The numbers ARE NOT multiples\n");
    }


    return 0;
}
