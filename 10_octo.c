#include <stdio.h>
#include <math.h>
int main(){
    int n,i=0,so[11];
    printf("nhap n: ");
    scanf("%d",&n);
    printf("he co so 8: ");
    if (n<0){
        printf("-");
    }
    do{
        so[i]=abs(n)%8;
        n = abs(n)/8;
        i++;
    }
    while (n>0);
    for (int j = i-1 ; j>=0 ; j--){
        printf("%d",so[j]);
    }
    return 0;
}