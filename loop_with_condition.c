#include<stdio.h>
int main()
{
    for(int i=1; i<=10; i++)
    {
        if(i%2 == 0)
        {
            printf("%d.Even\n",i);
        }
        else
        {
            printf("%d.Odd\n",i);
        }
    }
    return 0;

    // int i=1;
    // while( i<=10 )
    // {
    //     if(i%2 == 0)
    //     {
    //         printf("%d.Even\n",i);  |||while loop
    //     }
    //     else
    //     {
    //         printf("%d.Odd\n",i);
    //     }
    //     i++;
    // }
    // return 0;

}