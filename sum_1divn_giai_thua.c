#include <stdio.h>
int main(){
    int i,n,j,div=1;
    float sum=0;
    printf("nhap n: ");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++){
        for (j=1 ; j<=i ; j++){
            div *= j;
        }
        sum += 1.0/div;
        div=1;
    }
    if (n==1){
        printf("S = 1");
        return 0;
    }
    if (n==2){
        printf("S = 1 + 1/2! = %.2f",sum);
        return 0;
    }
    printf("S = 1 + 1/2! + ... + 1/%d! = %.2f",n,sum);
    return 0;
}