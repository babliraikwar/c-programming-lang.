#include <stdio.h>
struct num{
    float f;
};
int main(){
    struct num n1,n2,n3;
    n1.f=4;
    n2.f=3;
    //n3=n1+n2;
    printf("%f",n2.f);
    return 0;

}