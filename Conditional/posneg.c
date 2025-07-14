#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num==0){
        printf("It's zero.");
    }else if(num>0){
        printf("Positive number.");
    }else{
        printf("Negetive number.");
    }
}