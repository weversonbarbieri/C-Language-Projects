#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalminutes, exceeded, limit = 100;
    double totalexceed, totalbill, franchise = 50;


    printf("Enter the minutes spent: ");
    scanf("%d", &totalminutes);


    if (totalminutes <= 100) {

        printf("To be payed: R$ %.2lf\n", franchise);
    } else {

        exceeded = totalminutes - limit;
        totalexceed = exceeded * 2;
        totalbill = franchise + totalexceed;
        printf("To be payed: R$ %.2lf\n", totalbill);

    }





    return 0;
}
