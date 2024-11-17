#include <stdio.h>
struct demo{
    int i;
    char ch[2];

};
int main(){
    struct demo obj;
    obj.i=0;
    obj.ch[0]=3;
    obj.ch[1]=2;
    printf(" %d,%d,%d",obj.ch[0],obj.ch[1],obj.i);
    return 0;
}