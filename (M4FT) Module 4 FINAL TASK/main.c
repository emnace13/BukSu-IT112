#include <stdio.h>
#include <stdlib.h>


int main()
{
   int i, j, spc, rows, k, t = 1;
   printf("Number of rows : ");
   scanf("%d", &rows);
   spc = rows + 4 - 1;
   for(i = 1; i <= rows; i++)
   {
         for(k=spc;k>=1;k--)
            {
              printf(" ");
            }
	   for(j = 1; j <= i; j++)
	   printf("%d ", t++);
	printf("\n");
    spc--;
   }
   return 0;
}
