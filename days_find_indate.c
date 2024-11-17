#include <stdio.h>
#include <string.h>
int main(){
    int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("enter date here:");
    char date[11];
    char *token;
    scanf("%s",date);
    token=strtok(date,"-");
    token=strtok(NULL,"-");
    int i=atoi(token);
    printf("month has %d a days",arr[i-1]);
    return 0;
}