#include <stdio.h>

int main(){
    // calucalte the amount by accepting quanitity and rate per unit
    // Apply 10% discount if exceeds 500 and show net price
    double quantity,rpu, amount;

    printf("Enter the quantity\n");
    scanf("%lf", &quantity);

    printf("Enter the Rate PER uNIT");
    scanf("%lf", &rpu);

    amount = quantity * rpu;
    if( amount > 500){
        amount = amount * 0.9;
    };
    printf("The amount is %lf\n",amount);
    return 0;

}