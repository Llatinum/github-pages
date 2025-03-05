#include <stdio.h>
int main(){
    int n,i=1,n_giai_thua=1;
    printf("nhap so n: ");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++){
        n_giai_thua=n_giai_thua*i;
    }
    printf("%d! = %d",n,n_giai_thua);
    return 0;
}