#include <stdio.h>
int main(){
    int c[6]={1,4,8,3,27,9},max=c[1],min=c[1],pmax,pmin;
    for (int i=1 ; i<=5 ; i++){
        if (min>c[i]){
            min=c[i];
            pmin=i+1;
        }
        if (max<c[i]){
            max=c[i];
            pmax=i+1;
        }
    }
    printf("so thu %d lon nhat, bang %d\nso thu %d nho nhat, bang %d",pmax,max,pmin,min);
    return 0;
}