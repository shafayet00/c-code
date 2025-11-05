#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n-1];
    for (int i; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int index;
    scanf("%d",&index);
    for(int i=index; i<n-1;i++) // remove any index
    {
        a[i] =a[i+1];
    }
    //n--  or print without last index
    for (int i; i<n-1; i++) //print without last index
    {
        printf("%d ",a[i]);
    }
    return 0;
}