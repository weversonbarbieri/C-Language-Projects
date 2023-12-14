#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, x1, x2, x3, x4, x5;

    printf("Enter 1 intiger number: ");
    scanf("%d", &x);

    while (x != 0) {
       if (x % 2 == 0) {
          x1 = x + 2;
          x2 = x1 + 2;
          x3 = x2 + 2;
          x4 = x3 + 2;
          x = x + x1 + x2 + x3 + x4;

        } else if (x % 2 != 0) {
          x1 = x + 1;
          x2 = x1 + 2;
          x3 = x2 + 2;
          x4 = x3 + 2;
          x5 = x4 + 2;
          x = x5 + x1 + x2 + x3 + x4;
        }

       printf("Sum = %d\n", x);
       printf("Enter 1 intiger number: ");
       scanf("%d", &x);
    }



    return 0;
}
