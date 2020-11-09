#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;

    printf("Enter a number: ");
    scanf("%d", &temp);

    if(temp < 0)
        printf("You entered a negative number");
    else if(temp > 0)
        printf("You entered a positive number");

    return 0;
}
