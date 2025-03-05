#include <stdio.h>
float main()
{
    float a,b,tong,hieu,tich,thuong;
    printf("nhap so a:");
    scanf("%f",&a);
    printf("nhap so b:");
    scanf("%f",&b);
    tong=a+b;
    hieu=a-b;
    tich=a*b;
    thuong=a/b;
    printf("a+b=%.2f\n",tong);
    printf("a-b=%.2f\n",hieu);
    printf("a*b=%.2f\n",tich);
    printf("a/b=%.2f\n",thuong);
    if (thuong % 1 == 0){
        printf("a chia het cho b\n");
    }
    else {
        printf("a khong chia het cho b\n");
    }
    return 0;
}