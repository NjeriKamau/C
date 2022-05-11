//Write a factorial for n
#include <stdio.h>

int main(){
    int fact, num, i;
    printf("Enter the number for factorial\n");
    scanf("%d", &num);
    fact=1;
    
    for (i = 1; i <= num; i++)
    {
        // fact = fact * fact;
        fact *= i; 
        
        printf("The factorial of %d is %d \n", i,fact);
    }
    

    return 0;
}