#include <stdio.h>
int main()
{
    float length, breadth;
    printf("Enter length and breadth values:");
    scanf("%f%f", &length, &breadth);
    printf("Area = %.2f", length * breadth);
    printf("Perimeter = %.2f", 2 * (length + breadth));
    return 0;
}