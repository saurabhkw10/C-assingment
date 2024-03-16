#include <stdio.h>
int main() 
{
  int n1, n2, n3;
  printf("First Number =");
  scanf("%d" , &n1);
  printf("\nSecond Number =");
  scanf("%d" , &n2);
  printf("\nThrird Number =");
  scanf("%d" , &n3);
  if (n1 >= n2 && n1 >= n3)
    printf("The 1rd Number is the greatest among three.");
  else if (n2 >= n1 && n2 >= n3)
    printf("The 2rd Number is the greatest among three.");
  else
    printf("The 3rd Number is the greatest among three.");
}