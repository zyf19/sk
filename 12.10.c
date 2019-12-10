#include<stdio.h>
#define N 5
int main(void){
    int a[10],i;

    printf("Enter a:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("%5d",a[i]);
    }
    
    return 0;
}