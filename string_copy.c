#include<stdio.h>
int main()
{
    // char a[50],b[50];
    // scanf("%s %s",&a,&b);
    // int length = strlen(b);
    // for(int i=0; i<=length; i++) // manual
    // {
    //     a[i] = b[i];
    // }
    // printf("%s %s",a,b); 
    // return 0;

    char a[50],b[50];
    scanf("%s %s",&a,&b); 
    strcpy(a,b);  //add two string
    printf("%s %s",a,b); 
    return 0;
}