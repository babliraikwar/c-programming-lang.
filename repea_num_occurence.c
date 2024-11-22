#include <stdio.h>
#include <stdlib.h>
void firstandlast(int arr[],int n,int x){
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(x!=arr[i])
        continue;
        if(first==-1)
        first+=i;
        last+=i;
    }
    if(first!=-1)
    printf("first=%d ,last=%d",first,last);
    else
    printf("no occurence");
}
int main(){
int n,*ptr,x;
scanf("%d",&n);
ptr=(int*) malloc(n*sizeof(int));
if(ptr==NULL){
    printf("error! memory not allocated");
    exit(0);
}
printf("enter element");
for(int i=0;i<n;++i){
    scanf("%d",ptr+i);
}
printf("enter number to be search:");
scanf("%d",&x);
firstandlast(ptr,n,x);
return 0;
}