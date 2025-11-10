#include<stdio.h>
int main()
{
    int x=10;
    

    int  * ptr;
    ptr = &x; // adress of x

  //  *ptr =200;  // change x value
   
    printf("%p\n",ptr);   // print address
    printf("%d\n",*ptr);  //print value
    return 0;
}