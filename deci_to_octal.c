#include <stdio.h>
void decitooctal(int n){
    int octal[32];
    int i=0;
    while(n>0){
        octal[i]=n%8;
        n/=8;
        i++;
    } 
    for(int j=i-1; j>=0;j--){
        printf("%d",octal[j]);
    }
}
int main(){
    int n; 
    scanf("%d",&n);
    decitooctal(n);
    return 0;
}