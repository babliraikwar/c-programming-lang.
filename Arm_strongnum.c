#include <stdio.h>
#include <math.h>
int order(int x){
    int n=0;
    while(x){
        n++;
        x=x/10;
    }
    return n;
}
 int armstrong(int x){
        int n=order(x);
        int temp=x,s=0;
        while(temp){
            int r=temp%10;
             s+=pow(r,n);
            temp=temp/10;
        }
        if(s==x)
            return 1;
            return 0;
    
     }
int main(){
   int x;
   scanf("%d",&x);
   if(armstrong(x)==1)
   {
    printf("armstrong ");
   }
   else{
    printf("not armstrong");
   }
 return 0;
}