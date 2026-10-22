#include <stdio.h>

int main() {
    int n;
    long long sum;
    scanf("%d",&n);
    sum=(long long)n*(n+1)/2;
    printf("%lld",sum);

    return 0;
}