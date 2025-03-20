#include <stdio.h>
#define max 10
void input(int n,int arrn[max]){
    printf("cac he so cua da thuc:\n");
    for (int i=0 ; i<=n ; i++){
        printf("a%d = ",n-i);
        scanf("%d",&arrn[n-i]);
    }
}
int calc(int n,int x,int arrn[max]){
    int p=0,pow=1;
    for (int i=0 ; i<n+1 ; i++){
        p += arrn[i]*pow;
        pow *=x;
    }
    return p;
}
void output(int n,int m,int x,int arrn[max],int arrm[max],int p,int q){
    printf("he so cua P: ");
    for (int i=n ; i>=0 ; i--){
        printf("a%d = %d; ",i,arrn[i]);
    }
    printf("\nhe so cua Q: ");
    for (int i=m ; i>=0 ; i--){
        printf("a%d = %d; ",i,arrm[i]);
    }
    printf("\nvoi gia tri x = %d\nP = %d\nQ = %d\nT = P + Q = %d",x,p,q,p+q);
}
int main(){
    int n,m,x,arrn[max],arrm[max],p,q;
    printf("nhap gia tri x = ");
    scanf("%d",&x);
    printf("da thuc P bac n = ");
    scanf("%d",&n);
    input(n,arrn);
    printf("da thuc q bac m = ");
    scanf("%d",&m);
    input(m,arrm);
    p=calc(n,x,arrn);
    q=calc(m,x,arrm);
    output(n,m,x,arrn,arrm,p,q);
    return 0;
}