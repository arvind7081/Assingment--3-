/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.
*/
#include<stdio.h>
int main()
{
    int p,c,m,h,e;
    printf("Enter marks in Hindi : ");
    scanf("%d",&h);
    printf("Enter marks in English : ");
    scanf("%d",&e);
    printf("Enter marks in Maths : ");
    scanf("%d",&m);
    printf("Enter marks in Physics : ");
    scanf("%d",&p);
    printf("Enter marks in chemistry : ");
    scanf("%d",&c);
    if (h<=33 && e<=33 && m<=33 && p<=33 && c<=33)
    {
        printf("Passed");
    }
    else
    {
        printf("Failed");
    }
    return 0;
}