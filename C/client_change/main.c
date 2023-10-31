#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Qpurchased;
    double Mgiven, Pprice, change;

    printf("Product price: ");
    scanf("%lf", &Pprice);

    printf("Quantity Purchased: ");
    scanf("%d", &Qpurchased);

    printf("Money given: ");
    scanf("%lf", &Mgiven);

    change = Mgiven - (Pprice * Qpurchased);

    printf("Change = %.2lf\n", change);



    return 0;
}
