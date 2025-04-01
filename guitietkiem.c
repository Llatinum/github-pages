#include <stdio.h>
int main(){
    float A,s;
    int n;
    printf("so tien tiet kiem ");
    scanf("%f",&A);
    s=A;
    printf("so thang: ");
    scanf("%d",&n);
    for (int i=1 ; i==n ; i++){
        s += s*0.0045;
    }
    printf("%.3f",s);
    return 0;
}