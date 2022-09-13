/*18. Write a program which takes the month number as an input and display number of 
days in that month*/
#include<stdio.h>
int main()
{
    int  n;
    printf("Enter a number of month : ");
    scanf("%d",&n);
    if (n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    {
        printf("31 Days in this months");
    }
    else if(n==4 || n==6 || n==9 || n==11)
    {
        printf("30 days in this months");
    }
    else if (n==2)
    {
        printf("28 and 29 days in this months");
    }
    else 
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }
    return 0;
}