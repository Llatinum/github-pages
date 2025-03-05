#include <stdio.h>
float main(){
    float diem;
    printf("nhap diem:");
    scanf("%f",&diem);
    if (diem <5){
        printf("yeu");
        return 0;
    }
    if (diem >= 5 && diem < 7){
        printf("trung binh");
        return 0;
    }
    if (diem >= 7 && diem < 8){
        printf("kha");
        return 0;
    }
    if (diem >= 8 && diem < 9){
        printf("gioi");
        return 0;
    }
    if (diem >= 9){
        printf("xuat sac");
        return 0;
    }
}