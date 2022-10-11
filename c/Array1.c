#include <stdio.h>
// create a program that can dynamically access an array. Beginner level.
int main(){
    int a[5];
    
    for(int i=0 ; i < 4; i++)
        {
        printf("Enter your numbers:\n");    
        scanf("%d",a);
        printf("The values of a are %d\n",a[i]);}
    return 0;
}