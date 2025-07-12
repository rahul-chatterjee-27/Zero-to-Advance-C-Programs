#include<stdio.h>

int main(){
    float r,d,c,a;

    printf("Enter the value of radius of the circle: ");
    scanf("%f", &r);

    printf("\nRadius       : %.3f",r);
    d=2*r;
    printf("\nDiameter     : %.3f",d);
    c=2*3.14159265359*r;
    printf("\nCircumference: %.3f",c);
    a=3.14159265359*r*r;
    printf("\nArea         : %.3f",a);

    return 0;

}