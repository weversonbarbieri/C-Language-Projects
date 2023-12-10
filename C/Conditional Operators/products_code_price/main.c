#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int product, quantity;
    double pay;



    printf("Enter the product part number: ");
    scanf("%d", &product);
    printf("Quantity purchased: ");
    scanf("%d", &quantity);

    if (product == 1) {
        pay = quantity * 5.00;
        printf("Amount to pay: R$%.2lf", pay);

    } else if (product == 2) {
        pay = quantity * 3.50;
        printf("Amount to pay: R$%.2lf", pay);
    } else if (product == 3) {
        pay = quantity * 4.80;
        printf("Amount to pay: R$%.2lf", pay);

    } else if (product == 4) {
        pay = quantity * 8.90;
        printf("Amount to pay: R$%.2lf", pay);
    } else if (product == 5) {
        pay = quantity * 7.32;
        printf("Amount to pay: R$%.2lf", pay);
    }








    return 0;
}
