#include <stdio.h>
int main(){
    int m,n,*p1,*p2;
    printf("tinh tong 2 ma tran:\nso hang: ");
    scanf("%d",&m);
    printf("so cot: ");
    scanf("%d",&n);
    int mat1[m][n],mat2[m][n];
    p1=(int*)mat1;
    p2=(int*)mat2;
    printf("mat1:\n");
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            printf("phan tu [%d][%d]: ",i,j);
            scanf("%d",(p1+(i*m+j)));
        }
    }
    printf("mat2:\n");
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            printf("phan tu [%d][%d]: ",i,j);
            scanf("%d",(p2+(i*m+j)));
        }
    }
    for (int i=0 ; i<m*n ; i++){
        *(p1+i) += *(p2+i);
    }
    printf("mat1+mat2:\n");
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            printf("%d ",*(p1+(i*m+j)));
        }
        printf("\n");
    }
    return 0;
}