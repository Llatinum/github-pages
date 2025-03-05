#include <stdio.h>
int main(){
    int n;
    int i=1;
    for (i=1 ; i<=10 ; i++){
        printf("%d",i);
    }
    printf("nhap n so:");
    scanf("%d",&n);
    int arr [n];
    for (i=1 ; i<=n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("cac so vua nhap: ");
    for (i=1 ; i<=n ; i++){
        printf("%d, ",arr[i]);
    }
    return 0;
}