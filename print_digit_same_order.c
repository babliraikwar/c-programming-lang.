#include <stdio.h>
int printdigit(int n){
int arr[100];
int r,j,i=0;;
while(n){
    r=n%10;
    arr[i]=r;
    i++;
    n=n/10;
}
for(j=i-1;j>-1;j--){
    printf("%d",arr[j]);
}
}
int main(){
    int n;
    scanf("%d",&n);
    printdigit(n);
    return 0;
}
