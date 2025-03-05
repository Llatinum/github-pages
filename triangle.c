#include <stdio.h>
#include <math.h>
float main(){
    float a,b,c,p;
    printf("nhap a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    p=(a+b+c)/2;
    if(a+b<=c||a+c<=b||b+c<=a){
        printf("khong la tam giac");
        return 0;
    }
    //vuong, can, deu, thuong
    int vuong=a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b;
    if(a==b&&b==c){
        printf("tam giac deu\n");
        printf("chu vi = %.2f\n",2*p);
        printf("dien tich = %.2f",sqrt(p*(p-a)*(p-b)*(p-c)));
        return 0;
    }
    if(vuong&&(a==b||b==c||c==a)){
        printf("tam giac vuong can\n");
        printf("chu vi = %.2f\n",2*p);
        printf("dien tich = %.2f",sqrt(p*(p-a)*(p-b)*(p-c)));
        return 0;
    }
    if(a==b||b==c||c==a){
        printf("tam giac can\n");
        printf("chu vi = %.2f\n",2*p);
        printf("dien tich = %.2f",sqrt(p*(p-a)*(p-b)*(p-c)));
        return 0;
    }
    if(vuong){
        printf("tam giac vuong\n");
        printf("chu vi = %.2f\n",2*p);
        printf("dien tich = %.2f",sqrt(p*(p-a)*(p-b)*(p-c)));
        return 0;
    }
    printf("tam giac thuong\n");
    printf("chu vi = %.2f\n",2*p);
    printf("dien tich = %.2f",sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}