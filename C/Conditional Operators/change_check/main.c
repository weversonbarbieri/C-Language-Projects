#include <stdio.h>
#include <stdlib.h>

int main()
{
    double price, moneyreceived, change, duevalue;
    int quantity;

    printf("Product price: ");
    scanf("%lf", &price);

    printf("Quantity purchased: ");
    scanf("%d", &quantity);

    printf("Money received: ");
    scanf("%lf", &moneyreceived);

    duevalue = price * quantity;
    change = moneyreceived - duevalue;


    if (change >= 1) {
        printf("Change = %.2lf\n", change);
    } else {
        printf("Not enough money given. It is missing %.2lf reais\n", change * (-1));
    }





    return 0;
}
