#include <stdio.h>
int main(void) {
    int n, q;
    scanf("%d %d", &n, &q);
    long long prefix[n + 1];
    prefix[0] = 0;
    for (int i = 1; i <= n; i++) {
        long long value;
        scanf("%lld", &value);
        prefix[i] = prefix[i - 1] + value;
    }
    while (q--) {
        int a, b;
        scanf("%d %d", &a, &b);
        long long sum = prefix[b] - prefix[a - 1];
        printf("%lld\n", sum);
    }

    return 0;
}