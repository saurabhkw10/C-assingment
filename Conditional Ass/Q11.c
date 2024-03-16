#include <stdio.h>
int main() 
{
   int a, b, c, discriminant, realPart, imagPart;
   printf("Enter coefficients a, b and c: ");
   scanf("%d %d %d", &a, &b, &c);
   discriminant = b * b - 4 * a * c;
   if (discriminant > 0) 
   {
       realPart = -b / (2 * a);
       imagPart = sqrt(-discriminant) / (2 * a);
       printf("Roots are real and different\n");
       printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n", (float)realPart/100, (float)imagPart/100, (float)realPart/100, (float)imagPart/100);
   }
   else if (discriminant == 0) 
   {
       realPart = -b / (2 * a);
       printf("Roots are real and same\n");
       printf("root1 = root2 = %.2f\n", (float)realPart/100);
   }
   else 
   {
       printf("Root is imaginary;\n");
       printf("No solution.");
   }
}