#include <stdio.h>
int main(){
    int m1,n1,m2,n2,*p1,*p2;
    printf("tinh tich 2 ma tran:\nso hang mat1: ");
    scanf("%d",&m1);
    printf("so cot mat1: ");
    scanf("%d",&n1);
    printf("so hang mat2: ");
    scanf("%d",&m2);
    printf("so cot mat2: ");
    scanf("%d",&n2);
    if (n1!=m2){
        printf("khong co mat1*mat2");
        return 0;
    }
    int mat1[m1][n2],mat2[m2][n2],result[m1][n2];
    p1=(int*)mat1;
    p2=(int*)mat2;
    printf("mat1:\n");
    for (int i=0 ; i<m1 ; i++){
        for (int j=0 ; j<n1 ; j++){
            printf("phan tu [%d][%d]: ",i,j);
            scanf("%d",(p1+(i*m1+j)));
        } 
    }
    printf("mat2:\n");
    for (int i=0 ; i<m2 ; i++){
        for (int j=0 ; j<n2 ; j++){
            printf("phan tu [%d][%d]: ",i,j);
            scanf("%d",(p2+(i*n2+j)));
        } 
    }
    printf("mat1*mat2:");
    for (int i=0 ; i<m1 ; i++){
        for (int j=0 ; j<n2 ; j++){
            result[i][j]=0;
            for (int k=0 ; k<n1 ; k++){
                result[i][j] += *(p1+(i*n1+j))*(*(p2+(i*n2+j)));
            }
        }
    }
    for (int i=0 ; i<m1 ; i++){
        for (int j=0 ; j<n2 ; j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}