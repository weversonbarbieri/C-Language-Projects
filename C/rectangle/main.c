#include <stdio.h>
#include <math.h>

   //area = b * h
   //P=2(b + h)
   //d = raizQ b2 + h2

int main()
{
   double height, base, area, perimeter, diagonal;

   printf("Rectangle base: ");
   scanf("%lf", &base);
   printf("Rectangle height: ");
   scanf("%lf", &height);

   area = base * height;
   perimeter = 2 * (base + height);
   diagonal = sqrt(pow(base,2) + pow(height,2));

   printf("Area of the rectangle  = %.4lf\n", area);
   printf("Perimeter of the rectangle  = %.4lf\n", perimeter);
   printf("Diagonal of the rectangle  = %.4lf\n", diagonal);



   return 0;
}

