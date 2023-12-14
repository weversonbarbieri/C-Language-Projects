#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code, alcohool, gasoline, diesel;

    alcohool = 0;
    gasoline = 0;
    diesel = 0;
    printf("Enter the code (1, 2, 3) or 4 to stop: ");
    scanf("%d", code);

    while (code != 4) {

        if (code == 1) {
           alcohool = alcohool + 1;
        } else if (code == 2) {
           gasoline = gasoline + 1;
        } else if (code == 3) {
           diesel = diesel + 1;
        }

    printf("Enter the code (1, 2, 3) or 4 to stop: ");
    scanf("%d", &code);


    }

    printf("Thank you!\n");
    printf("Alcohool: %d\n", alcohool);
    printf("Gasoline: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);






    return 0;
}
