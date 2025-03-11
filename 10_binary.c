#include <stdio.h>
#include <math.h>
int main(){
    int n,i=0,so[32];
    printf("nhap n: ");
    scanf("%d",&n);
    printf("he co so 2: ");
    if (n<0){
        printf("-");
    }
    if (n<0){
        
    }
    do{
        so[i]=abs(n)%2;
        n = abs(n)/2;
        i++;
    }
    while (n>0);
    for (int j = i-1 ; j>=0 ; j--){
        printf("%d",so[j]);
    }
    return 0;
}