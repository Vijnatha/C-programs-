#include <stdio.h>
int main() 
{
    float amount, discount = 0, delivery = 0;
    int membership;
    printf("Enter the amount and membership:");
    scanf("%f %d", &amount, &membership);
    if (amount >= 500)
     {
        if (membership == 1)
            discount = amount * 0.10;
     } 
    else 
     {
        delivery = 50;
     }

    printf("Final amount = %.2f", amount - discount + delivery);
}