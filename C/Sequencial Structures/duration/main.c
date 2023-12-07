#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int duration, minutes2, hours2, minutes, seconds;
    double minutes1, hours1;


    printf("Enter dutation in seconds: ");
    scanf("%d", &duration);

    minutes1 = (double) duration / 60;
    minutes2 = (int) duration / 60;
    seconds = ((minutes1 - minutes2) * 60) / 1;


    hours1 = (double) minutes1 / 60;
    hours2 = (int) minutes1 / 60;
    minutes = (hours1 - hours2) * 60;

    printf("%d:%d:%d", hours2, minutes, seconds);


    return 0;
}
