#include <stdio.h>
unsigned int fact(unsigned int n){
    if(n==0)
    return 1;
 return n*fact(n-1);
}
int main(){
    int num=5;
    printf("factorial %d is : %d",num,fact(num));
    return 0;
}