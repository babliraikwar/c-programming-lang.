#include <stdio.h>
#include <math.h>
int primesq(int n){
    int i,flag=1;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
        return flag=0;
        if(flag==1)
        {
            printf("this is num is%d prime",n);
            printf("this prime number is squrroot within two deci. places%.2f",sqrt(2));
        }
        else{
            printf("not prime");
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",primesq(n));
    return 0;
}