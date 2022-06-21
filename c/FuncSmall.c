// Write a function that returns the samleest value
#include <stdio.h>

int small(int x,int y){
  if (x < y)
    return x;
  else
    return y;

}

int main(){
    int a,b;

    printf("Enter the first value");
    scanf("%d", &a);

    printf("Enter the second value");
    scanf("%d", &b);


    int z = small(a, b);
    printf("The small value is %d \n", z);
    return 0;
}