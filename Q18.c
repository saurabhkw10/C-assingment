#include <stdio.h>
int main() 
{
    int customerId, unitConsumed;
    char customerName[100];
    float amountCharged = 0.0;
    printf("Enter customer ID: ");
    scanf("%d", &customerId);
    printf("Enter customer name: ");
    scanf("%s", customerName);
    printf("Enter units consumed: ");
    scanf("%d", &unitConsumed);
        if (unitConsumed <= 199) 
	{
        amountCharged = unitConsumed * 1.20;
    } 
	else if (unitConsumed >= 200 && unitConsumed < 400) 
	{
        amountCharged = unitConsumed * 1.50;
    } 
	else if (unitConsumed >= 400 && unitConsumed < 600) 
	{
        amountCharged = unitConsumed * 1.80;
    } 
	else if (unitConsumed >= 600) 
	{
        amountCharged = unitConsumed * 2.00;
    }
    float surcharge = 0.0;
    if (amountCharged > 400) 
	{
        surcharge = amountCharged * 0.15;
    }
    float netAmount = amountCharged + surcharge;
    if (netAmount < 100) 
	{
        netAmount = 100;
    }
    printf("\nCustomer IDNO: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %d\n", unitConsumed);
    printf("Amount Charged @Rs. %f per unit: %f\n", (unitConsumed >= 600) ? 2.00 : (unitConsumed >= 400) ? 1.80 : (unitConsumed >= 200) ? 1.50 : 1.20, amountCharged);
    printf("Surcharge Amount: %f\n", surcharge);
    printf("Net Amount Paid by the Customer: %f\n", netAmount);
}