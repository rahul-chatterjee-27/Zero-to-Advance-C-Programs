#include<stdio.h>

int main(){
    int p,r,t;
    printf("Enter the principle ammount: ");
    scanf("%d",&p);
    printf("Enter the interest rate: ");
    scanf("%d",&r);
    printf("Enter the time(in year): ");
    scanf("%d",&t);

    int si=(p*r*t)/100;

    printf("The simple interest: %d",si);
}