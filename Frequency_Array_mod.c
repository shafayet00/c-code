#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d",&N);
    scanf("%d",&M);
    int a[N];
    for(int i=0; i<N; i++) 
    {
        scanf("%d",&a[i]);
    }
    int fre[M];
    for (int i = 0; i < M; i++) fre[i] = 0;
    for(int i=0; i<N; i++)
    {
        int val=a[i];
        if (val >= 0 && val < M)
        {
            fre[val]++;
        }
            
    }
    for(int i=0; i<M; i++)
    {
        printf(" %d\n",fre[i]);
    }
    return 0;
}