#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Suppose you are given ten cent on day 1 and on day 2 you are given twice as");
    printf("much. If each day you are given twice as much money as on the previous day,");
    printf("then on day 15, how much money you will receive? Build a C program to find");
    printf("the solution. Print each total money a day.\n\n\n");

    int day, cent;
    cent = 10;
    day = 1;
    while(day <= 15){
        printf("day %d : %d cent \n", day,cent );
        cent = cent*2;
        day++;
    }

    return 0;
}
