#include <stdio.h>

void main(){
    char chget, ch;
    chget = getchar();
    ch = getc("%c");
    printf("ch = %c\n the digital value is %d\n", chget, chget);
    printf("ch = %c\n the digital value is %d\n", ch, ch);
    getch();
}