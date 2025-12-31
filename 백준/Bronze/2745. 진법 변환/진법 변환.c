#include <stdio.h>

int main(void) {
    char N[40];
    int B;
    scanf("%s %d", N, &B);

    long long result = 0;

    for (int i = 0; N[i] != '\0'; i++) {
        char ch = N[i];
        int val;

        if (ch >= '0' && ch <= '9') val = ch - '0';
        else val = ch - 'A' + 10;

        result = result * B + val;
    }

    printf("%lld\n", result);
    return 0;
}
