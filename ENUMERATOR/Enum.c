#include <stdio.h>
#include <math.h>
int main(){
    float f=5,g=10;
    enum{i=10,j=20,k=50};
   // printf("%d",++k); we can't do this
   // printf("%d",f<<2);we can't do this
    //printf("%f",f%g);we can't do this
    printf("%lf",fmod(f,g));

    

}