#include <stdio.h>
union demo{
    int i;
    char ch[2];

};
int main(){
    union demo obj;
    obj.ch[0]=3;
    obj.ch[1]=2;
    obj.i=0;
    printf(" %d,%d,%d",obj.ch[0],obj.ch[1],obj.i);
    return 0;
}