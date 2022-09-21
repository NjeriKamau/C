// Find the biggest value in the array

#include<stdio.h>

int main(){
    double arr[5];
    int i;
    double big;

    printf("Enter the 5 values:\n");

    for(i = 0;i < 5; i++){
        // if arr[i] > big(
        //     big = arr[i];
        // )
    scanf("%lf",&arr[i]);
    }
    big = arr[0];
    for(i = 1; i < 5; i++){
        if(arr[i] > big){
            big = arr[i];
        }
    }
    printf("The biggest element is %lf \n",big);
    return 0;
    }