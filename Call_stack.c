#include<stdio.h>
void mallo()
{
    printf("Mallo\n");
}
void gello()
{
    printf("Gello\n");
    mallo();
}
void hello()
{
    printf("Gello\n");
    gello();
}
int main()
{
    printf("Hello\n");
    hello(); 
    return 0;
}