#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,*ptr,n,flag=0,sum;
    printf("enter sum:");
    scanf("%d",&sum);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("error! memory not allocated");
        exit(0);
    }
    printf("enter element:");
    for(i=0;i<n;i++)
    scanf("%d",ptr+i);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(ptr[i]+ptr[j]==sum){
            printf("array has sum of pair of two elements.");
            flag=1;
            break;
            }
       }
       if(flag)
       break;                 
    }
    if(!flag)
    printf("array doesn't have sum of two element with given sum. ");
    free(ptr);
    return 0;

}