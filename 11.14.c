#include <stdio.h>
int main(void)
{
    int choice, i;
    double price;
    for (i = 1; i <= 5; i++)
        
    {
        printf("apples [1] \n");
        printf("pears [2]\n");
        printf("oranges [3]\n");
        printf("grapes [4]\n");
        printf("exit [0]");

        printf("Enter choice");
        scanf("%d", &choice);
        if (choice == 0)
            break;
        switch (choice)
        {
        case 1:
            price = 3.00;
            break;
        case 2:
            price = 2.50;
            break;
        case 3:
            price = 4.10;
            break;
        case 4:
            price = 10.20;
            break;

        default:
            price = 0.00;
            break;
        }
        printf("price=%0.2lf\n", price);
    }
    printf("Thank you");
}