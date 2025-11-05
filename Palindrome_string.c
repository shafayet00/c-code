#include<stdio.h>
int main()
{
    char a[1001];
    scanf("%s",&a);
    int len= strlen(a);
    int ispalindrome=1;
    for(int i=0; i< len/2 ;i++)
    {
        if(a[i] != a[len-i-1])
        {
            ispalindrome = 0;
            break;
        }
    } 
    if(ispalindrome)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}