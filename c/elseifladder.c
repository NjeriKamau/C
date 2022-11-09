#include <stdio.h>

void main(){
    int marks;
    printf("Enter your Marks:\n");
    scanf("%d", &marks);
    if (marks > 80)
    printf("Grade is A");
    else if(marks > 70)
    printf("B grade");
    else if (marks > 60)
    printf("C Grade");
    else printf("You need to study more");

    printf("End of Program \n");
    
}