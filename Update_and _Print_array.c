#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for (int i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    int X,V;
    scanf("%d %d",&X,&V); //iput index and value 
    if (X >= 0 && X < N)
    {
        a[X] = V; // replace new value 
    }
    for(int i=N-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    } 
    return 0;
}