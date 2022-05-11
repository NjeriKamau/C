#include <stdio.h>

int main(){
    int a=5, b=6,c,d,e,f;
    c = a & b;
    d = a | b;
    e = a ^ b;
    f = ~a;
    printf("The values are c: %d, d: %d,e: %d,f: %d\n",c,d,e,f);
    return 0;
}