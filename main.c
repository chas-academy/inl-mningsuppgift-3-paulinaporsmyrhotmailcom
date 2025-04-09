#include <stdio.h>
#include <math.h>


float calculate_hypotenuse(float a, float b){
    float c = sqrt(pow(a, 2)+pow(b, 2));
    return c;
}

int main(){
    float a = 3.0;
    float b = 4.0;

    printf("%.2f\n", calculate_hypotenuse(a, b)); 
    a = 5.0;
    b = 12.0;

    printf("%.2f\n", calculate_hypotenuse(a, b)); 

    return 0;
}