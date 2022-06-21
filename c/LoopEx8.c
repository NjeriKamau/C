// Print all prime no. in a given range
// Find the total number of prime numbers in the range
#include<stdio.h>

int main(){
    int i, count, range,total, pnum=2;
    printf("Enter the range to choose from \n");
    scanf("%d", &range);
    total = 0;

    

    while (pnum <= range){  
          
        i = 1;
        count = 0;

        while (i <= pnum){
        if(pnum % i == 0){        
            count++;
            }
            i++;
        }     
        if(count == 2){
            printf("%d is a prime number: \n", pnum);
            total++;
        }
        pnum++;
        
    }
    // total++;
    
    printf("The total prime numbers is: %d \n", total);

    return 0;
}