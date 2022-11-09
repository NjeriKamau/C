#include <stdio.h>

int main(){
    int arr[5],i;
    // How to get input from user.
    printf("Enter your array values;\n");
    for(int i=0; i < 5; i++){
        scanf("%d", &arr[i]);

    }
    // How to return the values in reverse.
    printf("Your values are:\n");
    for(int i = 4; i >= 0; i--){
        printf("%d\t", arr[i]);
    }

    printf("\nEnd of program\n");

    return 0;
}