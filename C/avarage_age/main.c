#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{

    int age1, age2;
    char name1[50], name2[50];
    double avarage;

    printf("1st Person's data:\n");
    printf("Name: ");
    gets(name1);
    printf("Age: ");
    scanf("%d", &age1);

    printf("2st Person's data:\n");
    printf("Name: ");
    fseek(stdin, 0, SEEK_END);
    gets(name2);
    printf("Age: ");
    scanf("%d", &age2);

    avarage = ((double) age1  + age2) / 2;

    printf("The avarage age of %s and %s is %.1lf years\n", name1, name2, avarage);



}
