#include <stdio.h>
int main(){
    int i=1;
    for (i=1 ; i<=20 ; i++){
        if (i%2==1){
            continue;
        }
        printf("%d  ",i);
    }
    return 0;
}