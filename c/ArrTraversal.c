#include <stdio.h>
// This is an introduction to array traversal.
// And insertion
int main(){
    int a[50], size, i;
    printf("Enter size of array:\n");
    scanf("%d", &size);
    // if (size > 50)
    // printf("Out Of Bounds");
    // else
    printf("Enter elements of array:\n");
    for(i=0; i< size; i++){
        scanf("%d", &a[i]);
    }
    

    // insertion - num is the number to be inserted and pos is the position of the index
    int num, pos;
    printf("Enter your number and position\n");
    scanf("%d %d",&num, &pos);
    for(i = size -1; i > pos; i--){
        a[i+1] = a[i];

    }
    a[pos-1]=num;
    size++;
// // If insertion in the beginning
// for(i = size -1; i >= 0; i--){
//     a[i+1]=a[i];
// }
// a[0]=num;
// size++;


    printf("Elements in array are:\n");
    for(i = 0; i < size; i++){
        printf("%d\n",a[i]);
    }

}