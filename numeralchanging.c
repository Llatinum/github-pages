#include <stdio.h>
void decimaltobinary(int n){
    int i=0,so[32];
    do{
        so[i]=n%2;
        n = n/2;
        i++;
    }
    while (n>0);
    for (int j = i-1 ; j>=0 ; j--){
        printf("%d",so[j]);
    }
}
void decimaltooctal(int n){
    int i=0,so[11];
    do{
        so[i]=n%8;
        n = n/8;
        i++;
    }
    while (n>0);
    for (int j = i-1 ; j>=0 ; j--){
        printf("%d",so[j]);
    }
}
void decimaltohexadec(int n){
    int i=0;
    char so[9];
    do{
        so[i]=n%16;
        if (so[i]<10){
            so[i] = so[i] + '0';
        }
        else{
            so[i] = so[i] - 10 + 'A';
        }
        n = n/16;
        i++;
    }
    while (n>0);
    for (int j = i-1 ; j>=0 ; j--){
        printf("%c",so[j]);
    }
}
int main(){
    int n;
    printf("nhap so thap phan n:");
    scanf("%d",&n);
    printf("he co so 2: ");
    decimaltobinary(n);
    printf("\nhe co so 8: ");
    decimaltooctal(n);
    printf("\nhe co so 16: ");
    decimaltohexadec(n);
    return 0;
}