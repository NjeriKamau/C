#include <stdio.h>

int main(){
    int a,b,c,d,e,f,g;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;
    printf("The sum is: %d, The subtraction is:%d, the multiplication is: %d, the division is: %d, the modulo is: %d\n", c,d,e,f,g);
    return 0;
    
}