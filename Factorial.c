#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        int t;
        scanf("%d", &t);

        unsigned long long fac = 1; // use 64-bit type

        for (int j = 1; j <= t; j++)
        {
            fac = fac * j;
        }

        printf("%llu\n", fac); // print unsigned long long
    }

    return 0;
}
