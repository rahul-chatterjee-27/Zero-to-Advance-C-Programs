#include<stdio.h>

int main(){
    int buy_price,sell_price;

    printf("Enter the buy_price: ");
    scanf("%d",&buy_price);
    printf("Enter the sell_price: ");
    scanf("%d",&sell_price);

    if(buy_price==sell_price){
        printf("Zero profit margin.");
    }else if(buy_price<sell_price){
        printf("Profit margin: %d",(sell_price-buy_price));
    }else{
        printf("Loss margin: %d",(buy_price-sell_price));
    }
}