#include <stdio.h>
int main() 
{
    int age, credit;
    float income;
    printf("enter the age,income and credit values");
    scanf("%d %f %d", &age, &income, &credit);
    if (age < 21 || age > 60)
        printf("Loan rejected: age not in 21 to 60");
    else if (income < 25000)
        printf("Loan rejected: income below 25000");
    else if (credit < 700)
        printf("Loan rejected: credit score below 700");
    else
        printf("Loan approved");
}