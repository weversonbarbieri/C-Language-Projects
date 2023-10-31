#include <stdio.h>
//Type 2 numbers (x and y) and categorize if DECREASING or INCREASING.
//Stop the program when x and y are igual.

int main()
{
  int x, y;

  printf("Type 2 numbers: \n");
  scanf("%d", &x);
  scanf("%d", &y);

  if (x > y) {
        printf("DECREASING!\n");

      }
      else {
         printf("INCREASING!\n");
      }


  while (x != y ) {
      printf("Type other 2 numbers: \n");
      scanf("%d", &x);
      scanf("%d", &y);

   if (x > y) {
        printf("DECREASING!\n");

      }
      else if (x > y) {
         printf("INCREASING!\n");
      }
      else {

      }

    }



    return 0;

}
