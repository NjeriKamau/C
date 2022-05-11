#include <stdio.h>

int main(){
    // Get the average of three values
    int a,b,c,d;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter the value of c\n");
    scanf("%d",&c);

    d = (a+b+c)/3;
    printf("The average number is: %d \n", d);

}