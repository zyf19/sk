#include <stdio.h>

int isPrime(int x)
{
    int n = x / 2;
    int i;
    for (i = 2; i <= n; i++)
    {
        if (x % i == 0)
            return 0;
    }
    if (i > n)
    {
        return 1;
    }
}
int main(void)
{
    int m, count = 0;
    for (m = 2; m <= 1000; m++)
    {
        if (isPrime(m) == 1)
        {
            printf("%-5d", m);
            count++;
            if (count % 5 == 0)
                printf("\n");
        }
    }
    return 0;
}