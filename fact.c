#include <stdio.h>
unsigned int fact( unsigned int n){
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("number of%d =%d",n,fact(n));
    return 0;
}