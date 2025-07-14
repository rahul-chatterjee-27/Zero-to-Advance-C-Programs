#include<stdio.h>

int main(){
    int num_1,num_2,num_3;
    printf("Enter the first number: ");
    scanf("%d",&num_1);
    printf("Enter the second number: ");
    scanf("%d",&num_2);
    printf("Enter the third number: ");
    scanf("%d",&num_3);

    if(num_1==num_2 && num_2==num_3){
        printf("All entries are same.");
    }else{
        if(num_1>=num_2 && num_1>=num_3){
            printf("Largest number %d",num_1);
        }else if(num_2>=num_1 && num_2>=num_3){
            printf("Largest number %d",num_2);
        }else{
            printf("Largest number %d",num_3);
        }
    }
    
}