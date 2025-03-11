#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("ktr so hoan hao: ");
    scanf("%d",&n);
    for (i=1 ; i<=n/2 ; i++){
        if (n%i==0){
            sum += i;
        }
    }
    if (sum==n){
        printf("%d la so hoan hao",n);
        return 0;
    }
    printf("%d ko la so hoan hao",n);
    return 0;
}