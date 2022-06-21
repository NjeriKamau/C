// Get the sum of digits of the given number up to a single digit
#include <stdio.h>

int main(){
    int num, res;

    printf("Enter your number\n");
    scanf("%d",&num);

    while (num > 0){
        res = 0;
        while (num > 0)
            {
            res += (num % 10);
            num = num/10;
        }

        if(res > 9){
            num = res;
        }
    }
    
    printf("Result is %d\n", res);
    
    
}