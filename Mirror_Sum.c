#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    } 
    int b[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }

    int sum[n];
    for(int i=0; i<n; i++)
    {
        sum[i] = a[i] + b[n-1-i];
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",sum[i]);
    } 
    return 0;
}