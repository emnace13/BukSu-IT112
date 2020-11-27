#include <stdio.h>
#include <stdlib.h>

int main(){

int angle1, angle2, angle3, totalAngle;

printf("\nEnter a Angle 1: ");
scanf("%d", &angle1);

printf("\nEnter a Angle 2: ");
scanf("%d", &angle2);

printf("\nEnter a Angle 3: ");
scanf("%d", &angle3);

printf("\nTotalAngle: %d\n",angle1 + angle2 + angle3);

if(angle1 + angle2 + angle3 == 180){
  printf("\nThe angle is Valid.");
} else {
  printf("\nThe angle is Invalid.\n");
}

return 0;
}
