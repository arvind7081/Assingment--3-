/*17. Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not.
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a value of a,b and c : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b)
    {
        printf("Vaild Traingle");
    }
    else
    {
        printf("Invalid traingle");
    }
    return 0;
}