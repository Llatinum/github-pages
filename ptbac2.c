#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,delta;
    printf("nhap so a:");
    scanf("%d",&a);
    printf("nhap so b:");
    scanf("%d",&b);
    printf("nhap so c:");
    scanf("%d",&c);
    printf("giai puong trinh bac 2: ax^2 + bx + c = 0\n");
    delta = b*b - 4*a*c;
    if (delta<0)
    {
        printf("phuong trinh vo nghiem\n");
    }
    if (delta==0)
    {
        printf("phuong trinh co nghiem kep x1=x2=%f\n",-b/(2*a));
    }
    if (delta>0)
    {
        printf("phuon trinh co 2 nghiem phan biet\n");
        printf("x1=%f\n",(-b-sqrt(delta)/(2*a)));
        printf("x2=%f\n",(-b+sqrt(delta)/(2*a)));
    }
    return 0;
}