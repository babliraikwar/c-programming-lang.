#include <stdio.h>
void decitobinary(int n){
    int binary[32];
    int i=0;
    while(n>0){
        binary[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1; j>=0;j--){
        printf("%d",binary[j]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
decitobinary(n);
    return 0;

}