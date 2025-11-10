#include<stdio.h>
int s1(int n)
{
   ;
   int star=1;
   int space=n-1;
    
   for(int i=1; i<=n; i++)
   {
       for(int i=1 ; i<=space; i++)
       {
            printf(" ");
       } 
       for(int j=1; j<=star; j++)
       {
            printf("*");
       }
            printf("\n");
       star+=2;
       space--;
    }
    return 0;
}

int s2(int n)
{
    int star=2*n-1;
    int space=0;    
    for(int i=1; i<=n; i++)  
    {
        for(int j=1; j<=space; j++)  
        {
            printf(" ");
        }
        for(int j=1; j<=star; j++) 
        {  
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
    } 
    return 0;
}

int main()
{
    
    int n;
    scanf("%d",&n);
    s1(n);   // draw top half
    s2(n);   // draw bottom half
    
    
    return 0;
}


// #include<stdio.h>  //another way
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int star=1;
//     int space=n-1;
    
//     // upper half
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1 ; j<=space; j++)
//         {
//             printf(" ");
//         } 
//         for(int j=1; j<=star; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star+=2;
//         space--;
//     }

//     // lower half
//     star = 2*n - 1;
//     space = 0;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=space; j++)
//         {
//             printf(" ");
//         }
//         for(int j=1; j<=star; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star-=2;
//         space++;
//     }

//     return 0;
// }
