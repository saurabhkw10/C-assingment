//write a program which calculate simple interest
#include <stdio.h>
int main()
{
    int P, N;
    float R, SI;

    printf("Enter the principal: ");
    scanf("%d", &P);

    printf("Enter the rate: ");
    scanf("%f", &R);

    printf("Enter the Number of Year: ");
    scanf("%d", &N);

    SI = (P * R * N) / 100;
    printf("The Simple interest is %f", SI);

    return 0;
}
	