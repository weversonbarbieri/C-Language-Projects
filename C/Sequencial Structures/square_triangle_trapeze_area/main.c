#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//quadrado = pow (A, 2)
// area triangulo retangulo = base (a) * altura (b) / 2
// trapezio = ((A + B) * C) / 2

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    double a, b, c, trapezearea, trianglearea, squarearea;

    printf("Enter A measurement: ");
    scanf("%lf", &a);
    limpar_entrada();
    printf("Enter B measurement: ");
    scanf("%lf", &b);
    limpar_entrada();
    printf("Enter C measurement: ");
    scanf("%lf", &c);
    limpar_entrada();

    squarearea = pow(a, 2);
    trianglearea = (a * b) / 2;
    trapezearea = ((a + b) * c) / 2;


    printf("The square area = %.4lf\n", squarearea);
    printf("The triangle area = %.4lf\n", trianglearea);
    printf("The trapeze area = %.4lf\n", trapezearea);


    return 0;
}
