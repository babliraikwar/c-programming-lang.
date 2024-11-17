#include <stdio.h>
struct demo{
    char a;
    char b;
};
int main(){
    struct demo obj;
    obj.a='A';
    printf(" size of obj=%d\n",sizeof(obj));
    printf(" value  of obj.a=%d\n",obj.a);
    printf(" value  of obj.a=%c",obj.a);
    // sizeof(demo) we cant do this
    return 0;
}
