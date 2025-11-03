#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int a[1000000];  // big enough, avoid VLA

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    long long sum = 0;  // use long long to avoid overflow
    for (int i = 0; i < N; i++)
    {
        sum += a[i];
    }

    if (sum < 0)
    {
        printf("%lld\n", -sum);
    }
    else
    {
        printf("%lld\n", sum);
    }

    return 0;
}
