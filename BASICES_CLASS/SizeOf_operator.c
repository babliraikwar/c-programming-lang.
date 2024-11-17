#include <stdio.h>
int main(){
    printf(" size of int=%d\n",sizeof(int));
    int a=12;
    printf("size of a=%d\n",sizeof(a));
    printf(" size of 2=%d\n",sizeof(2));
    int i=12;
    int y=sizeof(++i);
    printf("i=%d y=%d",i,y);
    return 0;
}