#include<stdio.h>
int main()
{
    char s[1001];
    char t[1001];
    scanf("%s",&s);
    scanf("%s",&t);
    int s1=strlen(s);
    int t1=strlen(t);
    printf("%d %d\n",s1,t1);
    printf("%s %s",s,t);
    return 0;
}