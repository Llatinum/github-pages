#include <stdio.h>
int main(){
    int n1,n2,i,j=0,temp=0;
    printf("so pt mang 1: ");
    scanf("%d",&n1);
    int c1[n1];
    printf("mang 1: ");
    for (i=0 ; i<n1 ; i++){
        scanf("%d",&c1[i]);
    }
    printf("so pt mang 2: ");
    scanf("%d",&n2);
    int c2[n2];
    printf("mang 2: ");
    for (i=0 ; i<n2 ; i++){
        scanf("%d",&c2[i]);
    }
    int ct[n1+n2];
    for (i=0 ; i<n1 ; i++){
        while (c1[i]>c2[j] && j!=n2){
            ct[temp]=c2[j];
            j += 1;
            temp += 1;
        }
        ct[temp]=c1[i];
        temp += 1;
    }
    while (j<=n2-1){
        ct[temp]=c2[j];
        j += 1;
    }
    for (i=0 ; i<n1+n2 ; i++){
        printf("%d ",ct[i]);
    }
    return 0;
}