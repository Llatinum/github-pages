#include <stdio.h>
int main(){
    int n,i,sum,ft=1,fs=1;
    printf("nhap n: ");
    scanf("%d",&n);
    if (n==1){
        printf("f(1) cua day fibonaci = 1");
        return 0;
    }
    if (n==2){
        printf("f(2) cua day fibonaci = 1");
        return 0;
    }
    for (i=3 ; i<=n ; i++){
        sum = fs+ft;
        ft=fs;
        fs=sum;
    }
    printf("f(%d) cua day fibonaci = %d",n,sum);
    return 0;
}