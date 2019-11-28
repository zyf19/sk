#include <stdio.h>
int main(void)
{
    int i,x,y;
    
    for (x = 2; x <= 500; x++)
    {
        y=x/2;
        for (i = 2; i <= y; i++)
        {
            if (x % i == 0)
                break;
            if (i > y)
            {
                printf("%6d", x);
        
            }
        }
    }
    printf("\n");
    return 0;
}