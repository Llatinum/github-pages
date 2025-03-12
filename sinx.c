#include <stdio.h>
#include <math.h>
int main(){
    float x,eps,sinx=0,e;
    printf("x = ");
    scanf("%f",&x);
    printf("eps = ");
    scanf("%f",&eps);
    sinx = 0;
    e = x;
    int i=1;
    while (fabs(e)>eps){
        sinx += e;
        e *= -x*x/(2*i*(2*i+1));
        i++;
    }
    printf("sin(%.0f) = %.5f",x,sinx);
    return 0;
}