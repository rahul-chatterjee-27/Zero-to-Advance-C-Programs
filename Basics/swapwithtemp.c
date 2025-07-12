#include<stdio.h>

int main(){
    int a,b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    int temp=a;
    a=b;
    b=temp;
    
    printf("\n-----After swapping without using 'Temp' variable-----\n\nNow,\n");

    printf("First number:%d\n",a);
    printf("First number:%d",b);
}