// In this case, we get the sum of two arrays
#include <stdio.h>
#define INDEX 4

int main(){
    int a[INDEX],b[INDEX],c[INDEX],i,sum;
    printf("Enter the values of the first array\n");
    for(i = 0; i < 4; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the values of the second array\n");
    for(i = 0; i < 4; i++){
        scanf("%d",&b[i]);
    }
    printf("The sum of the two arrays is:\n");
    sum=0;
    for(i = 0; i < 4; i++){
        // The sum of the two arrays
        c[i] = a[i] + b[i];
        // The sum of the values in total.
        sum += c[i];
        printf("The sum of %d and %d is %d\n",a[i],b[i],c[i]);
    }
    printf("The total sum is %d\n",sum);
    return 0;
}