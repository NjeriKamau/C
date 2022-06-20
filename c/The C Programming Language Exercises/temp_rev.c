//Modify the temp conversion program to print the table in reverse order
// ie from 300...0
// Let's look into this later, it's buggy 11/05/2022.

#include <stdio.h>

int main(){
    double fahr;
    int step = 20;
    // let's try a for loop this time
    printf("Fahrenheit\tCelsius\n");
    for (fahr = 300.0; fahr >= 0; fahr -= step){
    //    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
        fahr = (5.0 / 9.0) * (fahr - 32) ;
        printf("%lf\n",fahr);
    }  
    return 0;
}