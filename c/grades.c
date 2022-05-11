#include <stdio.h>

int main(){
    // Get the percentage by dividing obtainedmarks with totalmarks
    int obtained, total;
    float percent;
    printf("Enter the obtained marks\n");
    scanf("%d",&obtained);

    printf("Enter the total marks\n");
    scanf("%d",&total);

    // printf("The total is %d", total);
    percent = obtained * 100 /total;

    printf("The percentage score is: %f \n",percent);
    // return 0;
}