// #include<stdio.h>
// void hello(int i)
// {
//     if(i == 0)  // end condition
//     {
//         return;       
//     }
//     printf("%d\n",i);
//     hello(i-1);  // increment
// }
// int main()
// {
    
//     hello(5);  // atart value
//     return 0;
// }

#include<stdio.h>
void hello(int n)
{
    if(n == 0)  // end condition
    {
        return;       
    }
    if(n == 1)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d ",n);
    }
    
    hello(n-1);  // increment
   
}
int main()
{
    int n;
    scanf("%d",&n);
    hello(n);  // atart value
    return 0;
}