#include<stdio.h>
int main()
{
    // for(int i=1; i<=10; i++)
    // {
    //     if(i == 5)
    //     {
    //         break;
    //     }
    //     printf("%d\n",i);
    // }
    // return 0;

    int i=1;
    while( i<=10)
    {
        if(i == 5)
        {
            break;
        }
        printf("%d\n",i);
        i++;
    }
    return 0;

}