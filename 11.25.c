#include<stdio.h>
int main(void)
{
    int x,y,z;
    for(x=0;x<=20;x++){
        for(y=0;y<=33;y++){
            for(z=0;z<=100;z+=3){
                if((x+y+z==100)&&(x*5+y*3+z/3.0==100))
                printf("x=%d,y=%d,z=%d\n",x,y,z);
            }
        }
    }
    return 0;
}