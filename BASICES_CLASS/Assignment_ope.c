#include <stdio.h>
int main(){
    int x,y,z,t;
    x=5,y=6,z=x+(y*2),t=x;
    printf("x=%d y=%d z=%d t=%d\n",x,y,z,t);
    z=10;
    x=y=z=10;
    x=x+5;
    x+=5;
    y*=5;
    z/=2;
    x%=5;
    printf("x:%d y:%d z:%d t:%d",x,y,z,t);
    return 0;
}