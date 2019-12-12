#include <stdio.h>
#define N 5
int findMin(int a[], int n)
{
    int i, min;
    min = a[0];
    for (i = 1; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int main(void)
{
    int a[N], i, min;

    printf("Enter a:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    min = findMin(a, N);
    printf("%5d", min);
    return 0;
}