#include <stdio.h>
int main(){
    int n,i,zero;
    int arr[n];
    printf("day co bao nhieu so: ");
    scanf("%d",&n);
    printf("nhap day so: ");
    for (i=1 ; i<=n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("in ra day so: ");
    for (i=1 ; i<=n ; i++){
        printf(" %d",arr[i]);
    }
    printf("\nso chan:");
    for (i=1 ; i<=n ; i++){
        if (arr[i]%2!=0){
            continue;
        }
        else{
            printf(" %d",arr[i]);
        }
    }
    printf("\nso le:");
    for (i=1 ; i<=n ; i++){
        if (arr[i]%2==0){
            continue;
        }
        else{
            printf(" %d",arr[i]);
        }
    }
    printf("\nso am ben trai, so duong ben phai:\n");
    for (i=1 ; i<=n ; i++){
        if (arr[i] < 0){
            printf(" %d",arr[i]);
        }
        if (arr[i] == 0){
            zero=0;
        }
    }
    for (i=1 ; i<=n ; i++){
        if (arr[i] > 0){
            printf(" %d",arr[i]);
        }
    }
    if (zero==0){
        printf(" khong lay so 0\n");
    }
    printf("so am - so 0 - so duong:\n");
    for (i=1 ; i<=n ; i++){
        if (arr[i] < 0){
            printf(" %d",arr[i]);
        }
        if (arr[i] == 0){
            zero=0;
        }
    }
    for (i=1 ; i<=n ; i++){
        if (arr[i]==0){
            printf(" %d",arr[i]);
        }
    }
    for (i=1 ; i<=n ; i++){
        if (arr[i] > 0){
            printf(" %d",arr[i]);
        }
    }
    return 0;
}