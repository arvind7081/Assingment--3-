// 15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check positive, negative or zero : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d number is positive number",num);
    }
    else if (num<0)
    {
        printf("%d number is negative number",num);
    }
    else
    {
        printf("%d Zero",num);
    }
    return 0;
}