#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    int sum= 0;
    for (int i=1;i<=n;i+=1)
    {
        sum= sum+i;
    }
    printf("Sum=%d",sum);
    return 0;

    // int i=1;
    // while (i<=n)
    // {
    //     sum= sum+i;    ***while loop
    //     i+=1;
    // }
    // printf("Sum=%d",sum);
    // return 0;
}