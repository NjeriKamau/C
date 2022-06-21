// Funnction definition of a prime number
#include<stdio.h>

int prime(int x){
    int i =1;
    int count = 0;
    while(i <= x){
        if(x % i == 0){
            count++;
        }
        i++;
    }  

    printf("The value of i and count is %d, %d\n",i,count);

    if(count == 2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int z, res;
    printf("Enter the number:\n");
    scanf("%d",&z);
    res = prime(z);
    if(res == 1){
        printf("The no. %d is a prime no.\n", z);
    }
    else{
        printf("The no. %d is not a prime no.\n", z);
    }
    return 0;
}