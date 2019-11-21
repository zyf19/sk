#include <stdio.h>

int main(void)

{

    int m, n;

    int a;

    int i;

    int sum = 0;

    printf("Enter m n:\n");

    scanf("%d%d", &m, &n);

    a = m;

    if (n < 2)

    {

        printf("%d", m);
    }

    else

    {

        for (i = 2; i <= n; i++)

        {

            m = 10 * m + a,

            sum += m;
        }
    }

    printf("%d", sum + a);

    return 0;
}