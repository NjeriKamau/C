// Nested Loops, display the numbers in na row

#include <stdio.h>

int main(){
    int num, row, column;
    row = 1;

    printf("Enter a number\n");
    scanf("%d", &num);

 // As a while loop
    
    // while (row <= num)
    // {
    //     column = 1;
    //     while (column <= row)
    //     {
    //         printf("%d ", column);
    //         column++;
    //     }
    //     printf("\n");
    //     row++;    
    // }

// As a for loop
    for (row =1; row <= num; row ++)
    {
        for ( column = 1; column <= row; column++)
        {
            printf("%d", column);

        }
        printf("\n");
        
    }
    
    

    return 0;

}