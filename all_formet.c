#include <stdio.h>

int main() {
    int A;               // normal integer
    long long B;         // very big integer
    float C;             // floating value
    char D;              // character

    scanf("%d %lld %f %c", &A, &B, &C, &D);

    printf(" this is %d\n", A);
    printf("%lld\n", B);
    printf("%.2f\n", C);
    printf("%c\n", D);

    return 0;
}
