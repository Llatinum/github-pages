#include <stdio.h>
int main(){
    int n;
    printf("so phan tu cua mang: ");
    scanf("%d",&n);
    int i=0,c,mang[n],sum=0,sumpos=0,sumneg=0,numpos=0,numneg=0;
    printf("nhap mang: ");
    while (i<=n-1){
        scanf("%d",&mang[i]);
        i++;
    }
    for (int j=0 ; j<=i ; j++){
        if (mang[j]>0){
            sumpos += mang[j];
            numpos++;
        }
        if (mang[j]<0){
            sumneg += mang[j];
            numneg++;
        }
        sum += mang[j];
    }
    float avg = sum*1.0/(i+1),avgpos = sumpos*1.0/numpos,avgneg = sumneg*1.0/numneg;
    printf("tong = %d\ntong duong = %d\ntong am = %d\ntbc = %.2f\ntbc duong = %.2f\ntbc am = %.2f\n",sum,sumpos,sumneg,avg,avgpos,avgneg);
    return 0;
}