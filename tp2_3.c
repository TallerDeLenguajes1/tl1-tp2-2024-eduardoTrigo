#include <stdio.h>
#include <stdlib.h>

int main()
{
#define N 5
#define M 7
    int i, j;
    int mt[N][M];
    int *p;
    p = mt;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            mt[i][j] = 1 + rand()% 100;
            // printf("%d\t", mt[i][j]);
            printf("%p\t", mt);
            p++;
        }
        printf("\n");
    }

    return 0;
}
