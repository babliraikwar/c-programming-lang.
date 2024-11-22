#include <stdio.h>
#include <string.h>
int main(){
    int hh,mm,ss;
    char a[3];
    printf("enter hours 'hh'=");
    scanf("%d",&hh);
    printf("enter minutes 'mm'=");
    scanf("%d",&mm);
    printf("enter seconds 'ss'=");
    scanf("%d",&ss);
    printf("enter 'pm' or 'am'=");
    scanf("%s",a);
    if(hh>0 && hh<=12 && mm>=0 && mm<=59 && ss>=0 && ss<=59 && 
    (strcmp(a,"pm")==0 || strcmp(a,"PM")==0|| strcmp(a,"am")==0 ||strcmp(a,"AM")==0)){
        if((strcmp(a,"pm")==0 || strcmp(a,"PM")==0 ) && (hh!=12)){
            hh=hh+12;
        }
        if((strcmp(a,"am")==0 || strcmp(a,"AM")==0) && (hh==12)){
            hh=0;
        }
        printf("the obtained 24-hour format of input is= :");
        printf("%d h-%d m-%d s",hh,mm,ss);
        printf("\n\n");
    }
    else {
        printf("provide the correct inputs.");
    }
    return 0;
}