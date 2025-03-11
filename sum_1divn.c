#include <stdio.h>
int main(){
    int i,n;
    float sum=0;
    printf("nhap n: ");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++){
        sum += 1.0/i;
    }
    if (n==1){
        printf("S = 1");
        return 0;
    }
    if (n==2){
        printf("S = 1 + ... + 1/%d = %.2f",n,sum);
        return 0;
    }
    printf("S = 1 + 1/2 + ... + 1/%d = %.2f",n,sum);
    return 0;
}