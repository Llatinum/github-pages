#include <stdio.h>
#include <math.h>
int main()
{
    int x,a,b,c; 
    printf("nhap 1 so bat ky: ");
    scanf("%d",&x);
    a = pow(x,2);
    b = pow(x,3);
    c = pow(x,4);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}