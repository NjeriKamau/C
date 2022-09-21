#include <stdio.h>


int main(){
    int i, j=1;
    // for(i=1,j=0;i<30, j <5; i++){
    printf("Starting the program\n");
    // for(i=j*2,j;i<=300 && j <= 300; i = j *2, j = i + 1){
    // for(i=1,j=0;j<30, i<50; j++){
    for(i=1,j=0;i<3, j<5; j++);
    {
    
        printf("The value of i is %d and j is %d\n",i, j);
        i++;
        j++;
        
    }
    printf("The value of i is %d and j is %d\n",i,j);
    printf("End of Program \n");
}