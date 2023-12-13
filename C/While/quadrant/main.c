#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y;

    printf("Enter X and Y values:\n");
    scanf("%d\n", &x);
    scanf("%d", &y);

    while (x != 0 && y != 0) {
        if (x > 0 && y > 0) {
            printf("Quadrant 1\n");

        } else if (x < 0 && y > 0){
        printf("Quadrant 2\n");

        } else if (x < 0 && y < 0) {
        printf("Quadrant 3\n");

        } else if (x > 0 && y < 0) {
        printf("Quadrant 4\n");
        }
        printf("Enter X and Y values:\n");
        scanf("%d\n", &x);
        scanf("%d\d", &y);

    }





    return 0;
}
