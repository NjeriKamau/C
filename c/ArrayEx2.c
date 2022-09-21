// Find the index of the element in the array.
#include<stdio.h>

int main(){
    int a[5];
    int ele, i,index;

    printf("Enter 5 values;\n");
    for(i=0; i<5;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter element to search:\n");
    scanf("%d", &ele);

    index = -1;
    for(i = 0; i < 5; i ++){
        if(a[i] == ele){
            index = i;
            break;
        }
    }

    if(index == -1){
        printf("Not Found\n");
    } else{
        printf("Found at %d",i);
    }
    return 0;     
}