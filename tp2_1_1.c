#include <stdio.h>
#include <stdlib.h>

int main()
{

#define N 20
    int i;
    double vt[N];
    for (i = 0; i < N; i++)
    {
        vt[i] = 1 + rand()% 100;
        printf("%.2f\n", vt[i]);
    }
    return 0;
}