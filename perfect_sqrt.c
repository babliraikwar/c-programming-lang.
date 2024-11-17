#include <stdio.h>
#include <math.h>
int main(){
    int n, intvar;
    scanf("%d",&n);
    double floatwar=sqrt((double)n);
    intvar=(int)floatwar;
    if((intvar*intvar)==n)
    printf("success");
    else
    printf("failure");
    return 0;
}