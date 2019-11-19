#include <stdio.h>
int main(void)

{
    int a, b, n, i;
    int sum = 0;
    printf("Enter n\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (a = 1, b = 1; b <= i; b++)
        {
            a = b * a;
        }
        sum += a;
    }
    printf("%d", sum);
    return 0;
}