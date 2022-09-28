#include <stdio.h>

void main(){
    int a = 30,b = 20,c,d,e,f,g,h,i;
    // Arithmetic check
    c = a * b;
    d = a / b;
    e = a + b;
    f = a - b;
    g = a % b;
    h = -a % b;

    // Extra on assignment
    i = a;
    i += 3;

    printf("The values of mul, div, add , sub, mod, rev_mod, are:%d,%d,%d,%d,%d,%d\n",c,d,e,f,g,h);
    printf("The extra assignment values are %d\n",i);

}