#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Enter the 1st value: ");
    scanf("%d", &a);

    printf("Enter the 2nd value: ");
    scanf("%d", &b);

    printf("Enter the 3rd value: ");
    scanf("%d", &c);

    if (a < b && a < c) {
        printf("Lower = %d", a);

    } else if (a > b && b < c) {
          printf("Lower = %d", b);

    } else {
         printf("Lower = %d", c);
    }





    return 0;

}
