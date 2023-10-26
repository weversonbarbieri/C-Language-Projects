#include <stdio.h>
#include <stdlib.h>

int main()
{

    double grade1, grade2, finalgrade;


    printf("Type the 1st grade: ");
    scanf("%lf", &grade1);

    printf("Type the 1st grade: ");
    scanf("%lf", &grade2);

    finalgrade = grade1 + grade2;

    if (finalgrade < 60.0) {
        printf("Final grade: %.1lf\n", finalgrade);
        printf("Not approved\n");
    } else {
          printf("Final grade: %.1lf\n", finalgrade);

    }



   return 0;
}
