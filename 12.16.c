#include<stdio.h>
int main(void)
{
    int a[5],j,t,i,max;
    printf("Enter a:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=4;j>=0;j--)
    {
        max=0;
        for(i=1;i<j+1;i++)
        {
            if(a[max]<a[i])
            {
                max=i;
            }
        }
        t=a[j];
        a[j]=a[max];
        a[max]=t;
    }
    for(i=4;i>=0;i--)
    {
    printf("%d ",a[i]);
    }
    return 0;
}