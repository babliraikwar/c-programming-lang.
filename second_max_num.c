#include <stdio.h>
int main(){
    int a,b ,c,max;
    printf("enter 3 numbers here:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c){
        if(b>=c)
        printf("max=%d",b);
        else
        printf("max=%d",c);
    }
    else if(b>=a && b>=c){
        if(a>=c)
        printf("max=%d",a);
        else
        printf("max=%d",c);
    }
    else if(a>=b)
    printf("%d",a);
    else
    printf("%d",b);
    return 0;


}