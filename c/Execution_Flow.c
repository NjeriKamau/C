// Execution flow of a program given that
// g(x) = x * 3
// f(x) = x * g(x-1)*3.2
#include<stdio.h>

int g(int x){
    return x * 3;
}

double f(int x){
    return x * g(x -1)*3.2;
}

int main(){
    int a = f(5);
    double b = g(2);

    printf("%d \n",a);
    printf("%lf \n",b);
}