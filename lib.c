#include <stdio.h>
#include <math.h>
int main(){

    double num;
    printf("Enter a number: ");
    scanf("%lf",&num);

    double square = sqrt(num);
    double power = pow(num,square);
    printf("The result is :%.2lf",power);


    return 0;
}

