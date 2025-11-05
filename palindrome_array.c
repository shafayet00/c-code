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
    int c[N];
    for(int i=0; i<N;i++)
    {
        c[i]=a[N-1-i]; // reverse
    }
    
    int isPalindrome = 1;
    for(int i =0; i<N; i++)
    {
        if(a[i] != c[i])
        {
            isPalindrome=0;
            break;
        }
    } 
    if (isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}