#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);

        if(A<=B && A<=C)    // minimum
    {
        printf("%d ",A);
    }
    else if(B<=C && B<=A)
    {
        printf("%d ",B);
    } 
    else if(C<=B && C<=A)
    {
        printf("%d ",C);
    } 


    if(A>=B && A>=C)    // maximum
    {
        printf("%d",A);
    }
    else if(B>=C && B>=A)
    {
        printf("%d",B);
    } 
    else if(C>=B && C>=A)
    {
        printf("%d",C);
    } 
    

    
    return 0;
}