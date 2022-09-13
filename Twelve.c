// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter alphabet to check lowercase or uppercase : ");
    scanf("%c",&a);
    if (a>='a' && a<='z')
    {
        printf("Lower Case");
    }
    else if(a>='A' && a<='Z')
    {
        printf("Upper case");
    }
    else
    {
        printf("This is not alphabet");
    }
    return 0;
}
