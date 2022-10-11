// Write a function that given, an array arr, returns an array containing at each index i the amount of numbers that are smaller than arr[i] to the right.

// For example:

// * Input [5, 4, 3, 2, 1] => Output [4, 3, 2, 1, 0]
// * Input [1, 2, 0] => Output [1, 1, 0]



#include <stdio.h>

void main(){
    int temp, i, n= 5, arr[n],a;
    for(i=1;i < n;i++){
        a = arr[0];
        if (arr[i] > a){
            temp = arr[i];
            arr[i] = a;
            a = temp ;
        }
    }

    for(i=0 ; i < n; n++){
        arr[i] -=  1;
    }
    printf("%ls",arr) ;
}