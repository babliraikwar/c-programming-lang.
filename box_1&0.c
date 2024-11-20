#include <stdio.h>
int main(){
    int i,j,rows,columns;
    printf("please enter no. of rows:");
    scanf("%d",&rows);
    printf("please enter no. of columns:");
    scanf("%d",&columns);
    for(i=1;i<=rows;i++){
        for(j=1;j<=columns;j++){
            if(i==1 || i==rows || j==1 || j==columns){
            printf("1");
            }
            else
                     
            {
             printf("0");
            }
        }
        printf("\n");

    }
    return 0;
}