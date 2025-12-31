#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int paper[100][100] = {0};

    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        for (int r = y; r < y + 10; r++) {
            for (int c = x; c < x + 10; c++) {
                paper[r][c] = 1;
            }
        }
    }

    int area = 0;
    for (int r = 0; r < 100; r++) {
        for (int c = 0; c < 100; c++) {
            if (paper[r][c]) area++;
        }
    }

    printf("%d\n", area);
    return 0;
}
