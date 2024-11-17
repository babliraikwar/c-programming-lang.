#include<stdio.h>
unsigned int fact(unsigned int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;

    }
    return f;
}
int main(){
    int num=6;
    printf("factorial is %d :%d",num,fact(num));
    return 0;
}