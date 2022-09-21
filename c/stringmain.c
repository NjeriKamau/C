#include <stdio.h>

char letter(void);

void main(){
    char ch = letter();
    printf("You have entered the letter:%c \n", ch);
}

char letter(){
    char l;
    printf("Enter your letter:\n");
    scanf("%c", &l);
    // return 'h';
    return l;
}