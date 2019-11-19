#include <stdio.h>
int main(void)
{
    int f3, i;
    double fact;
    int
        f1 = 1,
        f2 = 1;

    printf("%d %d ", f1, f2);
    for (i = 3; i <= 20; i++)
    {
        f3 = f1 + f2;
        fact = f2 * 1.0 / f3;
        printf("%d %.5lf ", f3, fact);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}