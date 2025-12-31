#include <stdio.h>

int main(void) {
    long long N;
    int B;
    scanf("%lld %d", &N, &B);

    char buf[64];
    int idx = 0;

    while (N > 0) {
        int r = N % B;
        if (r < 10) buf[idx++] = '0' + r;
        else buf[idx++] = 'A' + (r - 10);
        N /= B;
    }

    // 역순 출력
    for (int i = idx - 1; i >= 0; i--) {
        putchar(buf[i]);
    }
    putchar('\n');

    return 0;
}
