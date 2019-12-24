#include<stdio.h>
int main(void)
{
    int a[2][3],i,j,max;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    max=findMax(a,2);
    
    printf("max is %d",max);

    return 0;
}
int findMax(int x[][3],int n)
{
    int i,j,max;
    max=x[0][0];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            if(max<x[i][j])
            {
                max=x[i][j];
            }
        }
    }
    return max;
}