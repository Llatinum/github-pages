#include <stdio.h>
int main(){
    int i=1;
    for (i=1 ; i<=30 ; i++){
        if (i%2==1){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}