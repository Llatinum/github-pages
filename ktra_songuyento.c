#include <stdio.h>
#include <math.h>
int main(){
    int x,i=2;
    printf("kiem tr so nguyen to");
    scanf("%d",&x);
    if (x==3){
        printf("%d la so nguyen to",x);
        return 0;
    }
    for (i=2 ; i<=abs(sqrt(x)) ; i++){
        if (x%i==0){
            printf("%d ko la so nguyen to",x);
            return 0;
        }
    }
    printf("%d la so nguyen to",x);
    return 0;
}