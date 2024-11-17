#include <iostream>
using namespace std;
struct emp{
    char name[20];
    int age;
};
int main(){
   //  demo xx; we can't write like that bcs
   // dataype is compalsary (main don't known the type of demo only in c lang.)
    emp xx;
    int a=5;
    printf(" value  of a=%d",a);
    // sizeof(demo) we cant do this
    return 0;
}
