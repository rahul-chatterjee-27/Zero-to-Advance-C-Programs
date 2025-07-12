#include<stdio.h>

int main(){
    float km;       
    
    printf("Enter the distance: ");
    scanf("%f",&km);

    printf("Kilometer to Mile: %.3f",km*0.621371);
    return 0;
}