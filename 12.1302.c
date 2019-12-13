#include<stdio.h>
int main(void)
{
    int a[5],i,j,m;
    printf("Enter \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]>a[i])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}