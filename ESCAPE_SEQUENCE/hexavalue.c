#include<stdio.h>
int main(){
    char *s="A\x4a";
    char *n="A\x4ap";
   // char *s="A\x"; error

    printf("%s\n",s);
    printf("%s",n);
    return 0;
}