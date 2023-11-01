#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");

}
int main()
{

  char name[50];
  double hourlyrate, Whours, payroll;

  printf("Name: ");
  ler_texto(name, 50);

  printf("Hourly rate: ", &hourlyrate);
  scanf("%lf", &hourlyrate);

  printf("Worked hours: ");
  scanf("%lf", &Whours);


  payroll = hourlyrate * Whours;

  printf("The payroll for %s should be %.2lf\n", name, payroll);



    return 0;
}
