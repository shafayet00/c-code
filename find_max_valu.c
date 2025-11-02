#include<stdio.h> 
                  // include<limits.h>
int main()
{
    int N;
    scanf("%d",&N);
    int max=0;   // for negitive value  max=INT_MIN
    for (int i=1; i<=N; i++)
    {
        int value;
        scanf("%d",&value);
        if(value  > max)
        {
            max=value;
        }
    } 
    printf("%d",max);
    return 0;
}