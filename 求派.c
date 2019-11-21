#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, m = 3, n;
    double pi,x,y;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        x = pow(-1, i) / m, 
        m = m + 2,
        y+=x;
    }
    pi=1+y;
    printf("%.6lf", pi*4);
    return 0;
}
