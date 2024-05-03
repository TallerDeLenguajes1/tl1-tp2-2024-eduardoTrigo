#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

#define N 20
    int i;
    double vt[N];
    double *pvt;
    pvt = vt;

    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        *pvt = 1 + rand() % 100;
        printf("%.2f\n", *pvt);
        pvt++;
    }
    return 0;
}