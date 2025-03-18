#include <stdio.h>
#define max 6
void summatrix(int mat1[max][max],int mat2[max][max],int result[max][max],int m,int n){
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}
void multmatrix(int mat1[max][max],int mat2[max][max],int result[max][max],int m,int n,int p){
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<p ; j++){
            result[i][j]=0;
            for (int k=0 ; k<n ; k++){
                result[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
}
void nhapmatrix(int mat[max][max],int m,int n){
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            printf("nhap pt [%d][%d]",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}
void inmatrix(int mat[max][max],int m,int n){
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m1,m2,n1,n2,sum[max][max],mult1[max][max],mult2[max][max];
    printf("nhap 2 ma tran: \nmat1: \nso hang: ");
    scanf("%d",&m1);
    printf("so cot: ");
    scanf("%d",&n1);
    int mat1[m1][n1];
    nhapmatrix(mat1,m1,n1);
    printf("mat2:\nso hang: ");
    scanf("%d",&m2);
    printf("so cot: ");
    scanf("%d",&n2);
    int mat2[m2][n2];
    nhapmatrix(mat2,m2,n2);
    if (m1==m2 && n1==n2){
        printf("mat1+mat2:\n");
        summatrix(mat1,mat2,sum,m1,n1);
        inmatrix(sum,m1,n1);
    }
    if (n1==m2){
        printf("mat1*mat2:\n");
        multmatrix(mat1,mat2,mult1,m1,m2,n2);
        inmatrix(mult1,m1,n2);
    }
    if (m1==n2){
        printf("mat2*mat1:\n");
        multmatrix(mat2,mat1,mult2,m2,n2,n1);
        inmatrix(mult2,m2,n1);
    }
    return 0;
}