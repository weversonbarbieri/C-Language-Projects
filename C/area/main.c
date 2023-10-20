#include <stdio.h>


void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    double width, legth, M2price, price, area;


    printf("Width area: ");
    scanf("%lf", &width);
    limpar_entrada();

    printf("Length area: ");
    scanf("%lf", &legth);
    limpar_entrada();

    printf("Price per M2: ");
    scanf("%lf", &M2price);
    limpar_entrada();

    area = width * legth;
    price = area * M2price;

    printf("Area = %.2lf\n", area);
    printf("Price = %.2lf\n", price);


    return 0;
}
