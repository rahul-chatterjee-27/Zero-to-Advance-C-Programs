#include<stdio.h>

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Cube of %d is %d and Square of %d is %d .",num,(num*num*num),num,(num*num));
}