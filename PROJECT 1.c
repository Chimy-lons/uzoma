#include <stdio.h>
#include <stdlib.h>
//UZOMA CHIMERE
//D1009062

int main()
{
int number;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}

