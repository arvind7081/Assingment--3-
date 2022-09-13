// 2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check divisible by 5 or not : ");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("%d number is divisible by 5");
    }
    else
    {
        printf("%d number is not divisible by 5");
    }
    return 0;
}