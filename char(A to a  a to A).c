#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if (X>='a' && X<='z')
    {
        X=X-32;           // a=97 to A=65
        printf("%c",X);
    }
    else
    {
        X=X+32;         // A to a
        printf("%c",X);

    }

    return 0;
}