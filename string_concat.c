#include<stdio.h>
int main()
{
    char a[50],b[50];
    scanf("%s %s",&a,&b);
    // int length_a = strlen(a);
    // int length_b = strlen(b);
    // for(int i=0; i<=length_b; i++) // manual
    // {
    //     a[i+length_a] = b[i];
    // }
    strcat(a,b);
    printf("%s %s",a,b); 
    return 0;
}