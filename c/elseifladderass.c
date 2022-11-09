#include <stdio.h>

void main(){
    char letter;
    printf("Enter any Character\n");
    scanf("%c", &letter);
    if (letter >= 'a' && letter <='z')
    printf("%c is a small letter\n", letter);
    else if(letter >= 'A' && letter <= 'Z')
    printf("%c is a capital letter\n", letter);
    else if(letter >= '0' && letter <= '9')
    printf("%c is a number",letter);
    else if(letter >= '!' && letter <= '/')
    printf("%c is a Special Character!\n", letter);
    else printf("No match found... Sorry\n");
}