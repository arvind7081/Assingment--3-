// 1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check positive number or non-negative number : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is Positive Number",num);
    }
    else
    {
        printf("%d is Non-positive Number",num);
    }
    return 0;
}
