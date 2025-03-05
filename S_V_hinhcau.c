#include <stdio.h>
float main()
{
    float r,s,v;
    float pi=3.14159;
    printf("nhap ban kinh:");
    scanf("2lf",r);
    s=pi*r*r;
    v=pi*r*r*r*4/3;
    printf("dien tich hinh cau la:%2lf",s);
    printf("the tich hinh cau la:%2lf",v);
    return 0;
}