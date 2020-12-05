#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The user need to input a number range (e.g 10,150,777)\n");
    printf("The program must print from 1 to number range but skip all the numbers that are divisible by 3\n");
    printf("Add all printed numbers and print it.\n\n\n");

    int value, newValue, maxValue, divChecker;
    newValue = 1;
    value = 1;

    printf("Enter Max value of the number range: ");
    scanf("%d", &maxValue);

    do{
        divChecker = value % 3;


        if( divChecker != 0 ){

            printf("%d\t ", value);

            if( divChecker != 0 ){

                newValue = newValue + value;
            }

            value++;
        }else{
            value++;
        }

    }while(value <= maxValue);

    printf("\n\n%d in total divisible by 3 are excluded\n\n\n", newValue);
}
