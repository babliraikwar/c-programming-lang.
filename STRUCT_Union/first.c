#include <stdio.h>
struct demo{
    char a;
    char b;
};
int main(){
    struct demo obj;
    printf(" size of obj=%d",sizeof(obj));
    return 0;
}
