#include <stdio.h>
int main(){
    int x=8;
    printf("x=%d\n",x);
    printf("++x=%d\n",++x);
    printf("x=%d\n",x);   
    printf("--x=%d\n",--x);
    printf("x=%d\n",x);
// incement decrement...
    int b,c,a=10;
    b=++a;
    c=a++;
    b--;
    --c;
    b-=c;
    printf("b=%d\n",b);

    
// mix pre-increment and post increment
    
     x=6;
    printf("x=%d\n",x);
    printf("++x=%d\n",x++);
    printf("x=%d\n",x);   
    printf("--x=%d\n",--x);
    printf("x=%d\n",x);
    return 0;

  //another example  
 x=10;
    printf("x=%d\n",x);
    printf("++x=%d\n",x++);
    printf("x=%d\n",x);   
    printf("--x=%d\n",--x);
    printf("x=%d\n",x);
    return 0;
    
}