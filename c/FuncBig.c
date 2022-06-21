// Write a function that produces the bigger value
#include<stdio.h>

int big(int x, int y){
    if(x > y){
        return 1;      
    }
    else{
        return 0;       
    }
}

int main(){
    int a, b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    
    int z = big(a , b);

    if (z == 1){
        printf("%d is larger than %d\n", a,b);
    }
    else{
        printf("%d is smaller than %d\n", a, b);
    }

    return 0;
}