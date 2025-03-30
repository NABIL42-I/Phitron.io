#include <stdio.h>

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);

    // Prefix sum array
    long long prefix[N + 1];
    prefix[0] = 0;

    // Constructing prefix sum
    for (int i = 1; i <= N; i++) {
        prefix[i] = prefix[i - 1] + ((i + 2) / 3); // a[i] = (i+2)/3
    }

    // Processing queries
    while (Q--) {
        int L, R;
        scanf("%d %d", &L, &R);
        printf("%lld\n", prefix[R] - prefix[L - 1]);
    }

    return 0;
}
