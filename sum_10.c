#include <stdio.h>
int main(){
    int i=0,x=0,arr [10];
    printf("nhap 10 so:");
    do{
        scanf("%d",&arr[i]);
        x += arr[i];
        i++;
    }
    while (i<=9);
    printf("tong cac so = %d",x);
    return 0;
}