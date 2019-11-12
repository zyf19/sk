#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter a");
    scanf("%d", &a);
    if (a >= 90)
    {
        a=4;
    }
    else if (a < 90)
    {
        a=3;
    }
    else if (a < 80)
    {
        a=2;
    }
    else if (a < 70)
    {
        a=1;
    }
    else
    {
        a=0;
    }
    switch (a)
    {
    case 4:
        printf("Excellent");
        break;
    case 3:
        printf("Good");
        break;
    case 2:
        printf("Average");
        break;
    case 1:
        printf("Poor");
        break;
    case 0:
        printf("Failing");
        break;
    default:
    printf("no");
break;
    }
    return 0;
}