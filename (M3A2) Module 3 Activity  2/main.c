#include <stdio.h>
#include <stdlib.h>

int main(){

char intPC;
int lowcaseVowel, upcaseVowel;

printf("A program that check if the character/letter is vowel or consonant");
printf("\n\n");

printf("Enter a character: ");
scanf("%c", &intPC);

//lower - case character
lowcaseVowel = (intPC == 'a' || intPC == 'e' || intPC == 'i' || intPC == 'o' || intPC == 'u');
//upper - case character
upcaseVowel = (intPC == 'A' || intPC == 'E' || intPC == 'I' || intPC == 'O' || intPC == 'U');


if(lowcaseVowel || upcaseVowel) {
  printf("'%c' is Vowel.", intPC);
} else if(isdigit(intPC)){
    printf("Error: You entered a number");
}   else
  printf("'%c' is Consonant.", intPC);

return 0;
}
