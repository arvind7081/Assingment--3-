/*7. Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a value of a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("Quadratic equation are real and distict roots");
    }
     else if(d==0)
    {
        printf("Quadratic equation are real and equal roots");
    }
    else if(d<0)
    {
        printf("Quadratic equation are imaginary roots");
    }
    return 0;
}