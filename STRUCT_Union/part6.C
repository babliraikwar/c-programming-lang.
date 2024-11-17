#include <stdio.h>
union demo{
    char a;
    char b;

};
int main(){
    union demo obj;
    obj.a='A';
    printf(" size of obj=%d",sizeof(obj));
    printf(" value  of b=%c",obj.b);
    return 0;
}