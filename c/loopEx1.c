//print numbers from 1...n
#include <stdio.h>

int main(){
    int num,i ;
    printf("Enter the value of n\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("The number is...%d \n", i);
    }
    return 0;
}