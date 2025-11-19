#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        long long int mul = A * B * C;
        if (mul == 0 || M % mul != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", M / mul);
        }
    }
    return 0;
}