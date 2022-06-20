// My twist of the question

#include <stdio.h>

int main(){

    int num, val = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    while (val <= num)
    {
        printf("%d ", val);
        val++;
    }
    printf("\n");

    return 0;
}