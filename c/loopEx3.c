// Finf sum of given number
#include <stdio.h>

int main(){
    int num;
    int sum = 0;


    printf("Enter a number \n");
    scanf("%d", &num);

    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num /10;
    }
    
    printf("The sum of digits is %d\n",sum);
    return 0;

}