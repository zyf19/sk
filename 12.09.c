#include<stdio.h>
int main(void)
{
    int a,b;
    for(a=1;a<=5;a++){
        for(b=1;b<=20;b++){
            if(b==a||b==11-a||b==10+a||b==21-a){
                printf("w");
            }
            else{printf(" ");}
        }
        printf("\n");

    }
    return 0;
}