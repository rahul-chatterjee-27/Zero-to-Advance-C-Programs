#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter the number_1: ");
    scanf("%d",&num1);
    printf("Enter the number_2: ");
    scanf("%d",&num2);

    printf("\n-----Basic Calculation-----\n");

    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    printf("%d / %d = %d\n",num1,num2,num1/num2);
    printf("%d %% %d = %d\n",num1,num2,num1%num2);

}