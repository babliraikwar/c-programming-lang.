#include <stdio.h>
#include <math.h>

int main(){
    float pi=3.14;
    float d,r,area;
    scanf("%f",&d);
     r=(float)d/2;
     area=pi*r*r; 
    printf("%.2f",area);
     return 0;
}