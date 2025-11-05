#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int V[N];
    int sum1=0;
    int sum2=0;
    for(int i=0; i<N; i++)
    {
        scanf("%d",&V[i]);  // index input
        if(V[i] >0)   // positive index ar sum
        {
            sum1+=V[i];
           
        }
        else       //  negetive index ar sum
        {
            sum2+=V[i];
           
        }
        
    }
    printf("%d %d",sum1,sum2);
    return 0;
}