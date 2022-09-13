/*16. Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter charcter : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("%c is UpperCase",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c is LowerCase",ch);
    }
    else if (ch>='0' && ch<='9')
    {
        printf("%c is digit",ch);
    }
    else
    {
        printf("%c Special Character",ch);
    }
    return 0;
}