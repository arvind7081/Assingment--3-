/*10. Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("Enter Cost Price : ");
    scanf("%d",&cp);
    printf("Enter selling Price : ");
    scanf("%d",&sp);
    if(cp<sp)
    {
        profit=((sp-cp)*100/cp);
        printf("profit = %d",profit);
    }
    else
    {
        loss=((cp-sp)*100/cp);
        printf("loss = %d",loss);
    }
    return 0;
}