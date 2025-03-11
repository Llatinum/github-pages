#include <stdio.h>
#include <math.h>
int main(){
    int n,i=0;
    char so[9];
    printf("nhap n: ");
    scanf("%d",&n);
    printf("he co so 16: ");
    if (n<0){
        printf("-");
    }
    do{
        so[i]=abs(n)%16;
        if (so[i]<10){
            so[i] = so[i] + '0';
        }
        else{
            so[i] = so[i] - 10 + 'A';
        }
        n = abs(n)/16;
        i++;
    }
    while (n>0);
    for (int j = i-1 ; j>=0 ; j--){
        printf("%c",so[j]);
    }
    return 0;
}