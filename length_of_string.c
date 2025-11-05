#include<stdio.h>
int main()
{
    // char s[20];
    // scanf("%s",s);
    // int count=0;
    // for (int i=0; s[i] != '\0'; i++)
    // {
    //     count++;
    // } 
    // printf("%d",count);
    // return 0;

    // another way
    char s[20];
    scanf("%s",s);

    int size = strlen(s);
    printf("%d",size);
    return 0;
}