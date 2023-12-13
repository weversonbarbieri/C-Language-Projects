#include <stdio.h>
#include <stdlib.h>

int main()
{
    int password;

    printf("Type the password: ");
    scanf("%d", &password);

    while (password != 2002) {
        printf("Invalid Password! Try again: ");
        scanf("%d", &password);


        }

        if (password == 2002) {
            printf("Access granted!\n");
    }




    return 0;
}
