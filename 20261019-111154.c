#include <stdio.h>
int main() 
{
    int id, password;
    printf("Enter your id and password:");
    scanf("%d %d", &id, &password);
    if (id != 101)
        printf("User not found");
    else if (password == 4321)
        printf("Login successful");
    else
        printf("Incorrect password");
}