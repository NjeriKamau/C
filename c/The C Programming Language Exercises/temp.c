//C = (5/9)(F-32)
// Convert temp from fahr to cel
// Print Fahrenheit-Celsius table for fahr = 0,20...,300
#include <stdio.h>


int main(){
    // int fahr, celsius;
    float fahr, celsius;

    int lower = 0; // lower limit of temperature table
    int upper = 300;//upper limit
    int step = 20;//step size
    // printf("%d%d")

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while(fahr <= upper){
        // celsius = 5 * (fahr -32) / 9;
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        
        // printf("%d\t\t%d\n",fahr,celsius);
        
        printf("%3.0f\t\t%6.1f\n",fahr,celsius);
        fahr += step; 
    }
    // return 0;
}