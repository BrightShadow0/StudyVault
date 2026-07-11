//if cost and selling price are entered, write program to determine whether seller has made profit or loss, and also by how much.

#include <stdio.h>
int main(){
int buy,sell,profit;
printf("\nEnter cost price of item($): ");
scanf("%d",&buy);
printf("Enter selling price of item($): ");
scanf("%d",&sell);
profit=sell-buy;
if(profit>0){
    printf("Seller has made profit of %d$ (%d rupees)\n\n",profit,profit*94);
}
if(profit==0){
    printf("Seller has made no profit or loss\n\n");
}
if(profit<0){
    printf("Seller has incurred loss of %d$ (%d rupees)\n\n",(-1)*profit,(-1)*(profit*94));
}
    return 0;
}