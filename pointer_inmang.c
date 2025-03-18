#include <stdio.h>
int main(){
    int c[10]={1,2,3,4,5,6,7,8,9,0},*pc;
    pc=c;
    for (int i=0 ; i<10 ; i++){
        printf("%d ",*pc+i);
    }
    return 0;
}