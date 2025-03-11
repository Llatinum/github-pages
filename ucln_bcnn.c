#include <stdio.h>
#include <math.h>
int main(){
    int m,n,i;
    printf("nhap 2 so nguyen");
    scanf("%d%d",&n,&m);
    for (i=abs(n)+abs(m) ; i>=1 ;i--){
        if (n%i==0 && m%i==0){
            printf("UCLN = %d\n",i);
            break;
        }
    }
    for (i=1 ; i<=abs(n*m) ;i++){
        if (i%n==0 && i%m==0){
            printf("BCNN = %d",i);
            break;
        }
    }
    return 0;
}