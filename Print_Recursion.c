#include<stdio.h>
void call(int n)
{
    if(n == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    call(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    call(n); 
    return 0;
}