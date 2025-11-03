#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);  //find maximum number
    }
    int max=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d",max); 
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]); //find minimum number
//     }
//     int min=a[0];
//     for(int i=0; i<n; i++)
//     {
//         if(a[i] < min)
//         {
//             min = a[i];
//         }
//     }
//     printf("%d",min); 
//     return 0;
// }