#include <stdio.h>

int hcf(int a, int b){
    if(a==0)
    return b;
    if(b==0)
    return a;
    if(a==b)
    return b;
    if(a>b)
    return hcf(a-b,b);
    return hcf(a,b-a);
}
int main(){
    int a,b;
    a=18;
    b=12;
    printf("hcf%d and%d =%d",a,b,hcf(a,b));

}