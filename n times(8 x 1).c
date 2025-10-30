// Write a c program to print 8’s time table to 200    ||8*1 to 200

#include<stdio.h>
int main()
{
    int n=8;
    for(int i=1; n*i<=200; i+=1)
    {
        printf("%dx%d = %d\n",n,i,n*i);
    }
    return 0;
}