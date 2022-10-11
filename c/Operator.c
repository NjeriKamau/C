#include <stdio.h>

int main(){
    int a = 10, b = 5, result1, result2, result3;
    result1 = a > b;
    printf("%d\n", result1);
    printf("%d\n",a);
    result2 = a-- && ++b;
    result3 = --a && ++b;
    printf("%d\n", result2);
    printf("%d\n", result3);
}