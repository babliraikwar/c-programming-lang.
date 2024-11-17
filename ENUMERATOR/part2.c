#include <stdio.h>
enum year{jan,feb,mar,apr,may,jun,jul,aug,set,oct,nov,dec};
int main(){
    enum year i; //int i=0;
    for(i=0;i<=dec;i++){
        printf("%d\t",i);
    }
        return 0;
    
}