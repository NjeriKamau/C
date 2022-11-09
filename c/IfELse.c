#include <stdio.h>

void main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age > 25 && age <= 30){
        printf("Let's go for a coffee\n");
    }
    else{
        printf("Sorry, you're too young for me\n");
    }
}