#include <stdio.h>
int main(){
    char str[]="BABLI";
    int i=0;
    for(i=0;str[i]!='\0'; i++){
        printf("character of str=%c\t",str[i]);
        printf("address  of str=%p\n",&str[i]);
    }
        return 0;
        
    }

