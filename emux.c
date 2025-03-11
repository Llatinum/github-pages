#include <stdio.h>
#include <math.h>

int giai_thua(int a){
    int result = 1;
    for (int i = 1; i <= a; ++i){
        result *= i;
    }
    return result;
}
float bieu_thuc(int x, int n){
    return pow(x, n) / (1.0 * giai_thua(n));
}
int main(){
    float eps, result = 1.0;
    int x, i = 1;
    printf("e mu ?: ");
    scanf("%d", &x);
    printf("do chinh xac eps = ? ");
    scanf("%f", &eps);
    do{
        result += bieu_thuc(x,i);
        i++;
    }
    while (fabs(bieu_thuc(x,i)) >= eps);
    printf("e mu %d = %f\n", x, result);
    return 0;
}
