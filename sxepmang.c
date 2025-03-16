#include <stdio.h>
int main(){
    int n,daytang[n],i,j;
    printf("so pt cua mang: ");
    scanf("%d",&n);
    int c[n],sxep[n];
    printf("mang: ");
    for (i=0 ; i<n ; i++){
        scanf("%d",&c[i]);
    }
    int temp;
    for (i=0 ; i<n-1 ; i++){
        for (j=0 ; j<n-i-1 ; j++){
            if (c[j]>c[j+1]){
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    for (i=0 ; i<n ; i++){
        printf("%d ",c[i]);
    }
    return 0;
}