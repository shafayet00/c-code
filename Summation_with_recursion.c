#include <stdio.h>

void sum(int A[], int n, int i, int *s)
{
    if (i == n)
        return;

    *s += A[i];
    sum(A, n, i + 1, s);
}

int main()
{
    int n;
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int s = 0;   
    sum(A, n, 0, &s);
    printf("%d\n", s);

    return 0;
}
