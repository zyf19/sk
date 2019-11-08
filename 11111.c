#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter a:\n");
    scanf("%d",&a);
    if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400) == 0)
    {
        printf("a is yes\n", a);
    }

    else
    {
        printf("a is no\n", a);
    }
    return 0;
}