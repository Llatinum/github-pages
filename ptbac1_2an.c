#include <stdio.h>
float main(){
    float a,b,c,d,e,f;
    printf("nhap so a,b,c,d,e,f:");
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
    printf("giai he phuong trinh bac nhat 2 an:\n");
    printf("%.2fx + %.2fy = %.2f\n", a, b, c);
    printf("%.2fx + %.2fy = %.2f\n", d, e, f);
    if (e - b * d / a == 0 && e - d * b / a == 0) {
        printf("he phuong trinh co vo so nghiem");
        return 0;
    }
    if ((e - b * d / a != 0 && e - d * b / a == 0) || (e - b * d / a == 0 && e - d * b / a != 0)) {
        printf("he phuong trinh vo nghiem");
        return 0;
    }
    else {
        float x,y,e1,f1;
        float e1 = e - (b * d / a);
        float f1= f - (c * d / a);
        float y = f1 / e1;
        float x = (c - b * y) / a;
        printf("he phuong trinh co nghiem duy nhat:\n");
        printf("x = %.2f;",x);
        printf(" y = %.2f",y);
        return 0;
    }
}