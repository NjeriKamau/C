#include <stdio.h>
// create a program that can dynamically access an array. Beginner level.
int main(){
    int a[50], size, i;
    printf("ENter the size of array:\n");
    scanf("%d", &size);

    printf("Enter your numbers:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The values of a are:\n");
    for (i = 0; i < size; i++){
        printf("%d\n", a[i]);
    }
    // return 0;
}