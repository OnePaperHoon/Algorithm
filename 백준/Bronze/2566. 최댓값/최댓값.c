#include <stdio.h>

int main(void)
{
    int max = 0;
    int posX, posY;
    int N;
    for (int x = 0; x < 9; x++)
    {
        for (int y = 0; y < 9; y++)
        {
            scanf("%d", &N);
            if (max <= N)
            {
                max = N;
                posX = x;
                posY = y;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", posX + 1, posY + 1);
}