#include<stdio.h>
int main()
{
    int n;
    char c[1000001];
    scanf("%d",&n);
    scanf("%s",&c);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=c[i]-'0';
    }
    if(sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}