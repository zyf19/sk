#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, n, i, y = 0, x = 0;
    printf("Enter n a");
    scanf("%d %d", &n, &a); 
    for (i = 0; i <= n - 1; i++)
    {
        y += a * pow(10, i);
        x += y;
    }
    printf("%d", x);
    return 0;
}