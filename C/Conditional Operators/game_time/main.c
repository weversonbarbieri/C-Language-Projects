#include <stdio.h>
#include <stdlib.h>

int main()
{
   int start, end, gamehours, gametime;

    printf("Enter the starting hour: ");
    scanf("%d", &start);
    printf("Enter the ending hour: ");
    scanf("%d", &end);

    if (start > 12 && end < 12) {
       gamehours = (24 - start) + end;

    } else if (end > 12) {
       gamehours = (12 - start) + (end - 12);

    } else {
       gamehours = (12 - start) + (12 - end);
    }


    printf("The game lasted %d hour (s)", gamehours);



    return 0;
}
