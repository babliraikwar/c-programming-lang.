#include <stdio.h>
struct demo{
    char a;
    char b;
};
int main(){
    struct demo obj;
    obj.a='A';
    printf(" size of obj=%d\n",sizeof(obj));
    printf(" value  of obj.b=%c",obj.b); // value of obj.b is bydefault =null
    // sizeof(demo) we cant do this
    return 0;
}
