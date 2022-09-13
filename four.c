/*4. Write a program to check whether a given number is an even number or an odd 
number without using % operator.*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number  to check even or odd : ");
    scanf("%d",&num);
    if((num/2)*2==num)
    {
        printf("%d is Even number",num);
    }
    else
    {
        printf("%d is Odd number",num);
    }
    return 0;
}