#include<stdio.h>
int main(void)
{ 
    double s,t,m,y;
    printf("Enter s,t:\n" );
    scanf("%lf,%lf",&s,&t);
    if (s<=3)
   { y=t/5,
    m=10+2*y;}
    else if (s>3&&s<=13)
    {y=t/5,
    m=10+(s-3)*2+2*y;}
    else
    y=t/5,
    m=30+(s-13)*3+2*y;
    printf("m is %lf",m);
    return 0;
}
    
