#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
#define N 5
#define M 7
    int i, j;
    int mt[N][M];
    int *p;

    p = &mt;

    srand(time(NULL));

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            // mt[i][j] = 1 + rand()% 100;
            *p = 1 + rand()% 100;
            // printf("%d\t", mt[i][j]);
            printf("%d\t", *p);
            p++;
        }
        printf("\n");
    }

    return 0;
}
