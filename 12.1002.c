#include<stdio.h>
#define N 5
int main(void){
    int a[10],i,max;

    printf("Enter a:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<N;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
        printf("%5d",max);
    
    
    return 0;
}