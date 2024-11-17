#include <stdio.h>
int findprime(int n){
    if(n==0)
    return 0;
    int flag=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        flag=0;
        break;
    }
    if(flag==1){
        return 1;
    }
}
int main(){
    int n1,n2,i;
    printf("enter lower value:");
    scanf("%d",&n1);
    printf("enter higher value:");
    scanf("%d",&n2);
    printf("all prime number in this range :");
    for(i=n1;i<=n2;i++){
        if(findprime(i))
        printf("%d\n",i);
    }
    return 0;
}
