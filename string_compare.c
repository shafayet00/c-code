#include<stdio.h>
int main()
{
    int a[50], b[50];
    scanf("%s %s",&a,&b);
    // int i=0;
    // while (1)   //manual
    // {
    //     if(a[i] == '\0' && b[i] =='\0')
    //     {
    //         printf("Equal");
    //         break;
    //     }
    //     else if(a[i] == '\0')
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if(b[i] == '\0')
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
    //     else if(a[i] < b[i])
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if(a[i] > b[i])
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
    //     else if(a[i] == b[i])
    //     {
    //         i++;
    //     }
    //}

    int val=strcmp(a,b);
    if(val < 0)
    {
        printf("A is smaller");
    }
    else if(val == 0)
    {
        printf("Equal");
    }
    else if(val > 0)
    {
        printf("B is smaller");
    }
    return 0;
}