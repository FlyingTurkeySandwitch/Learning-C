#include <stdio.h>
#include <math.h>

#define PI 3.14

double calculate_area_circle(double r, double p){
    return p * pow(r,2);
}

    
    

int main(void){
    double r;
    printf("enter radius:");
    r = scanf("%f", &r);
    printf("area of circle with radius %f is %f", r, calculate_area_circle(r,PI));
    return 0
}