#include <stdio.h>
enum day{sun=1,mon,tues=5,thurs,wed=10,fri,sat};
int main(){
    printf("%d,%d,%d,%d,%d,%d,%d",sun,mon,tues,thurs,wed,fri,sat);
    return 0;
}