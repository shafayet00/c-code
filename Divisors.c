#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        if(n%i == 0)  // devide n 
        {
           printf("%d\n",i);
        }
        
    } 
    return 0;
}