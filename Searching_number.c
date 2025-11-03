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
    int x;
    scanf("%d",&x);
    int found=0;
    for(int i=0; i<N; i++)
    {
        if(a[i] == x)
        {
            printf("%d ",i);
            found=1;
            break;
        }
       
    }
    if(!found)
    {
        printf("-1");
    }
    printf("\n");
    return 0;
}