#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, factorial, x;

    printf("Enter the N value: ");
    scanf("%d", &N);

    x = 1;
    for (i = 1; i < N; i++) {
        factorial = x * (i + 1);
        x = factorial;
    }

    printf("FACTORIAL: %d", x);



    return 0;
}
