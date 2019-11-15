#include <stdio.h>
int main(void)
{
    int n, product = 1;
    int i;
    printf("Enter n:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        product = product * i;
    }
    printf("product=%d\n", product);

    return 0;
}