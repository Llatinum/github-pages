#include <stdio.h>
int main(){
    int m,n,*p1,*p2,*p3;
    FILE *f;
    printf("tinh tong 2 ma tran:\nso hang: ");
    scanf("%d",&m);
    printf("so cot: ");
    scanf("%d",&n);
    int mat1[m][n],mat2[m][n],mat3[m][n];
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
        *(p3+i) = *(p1+i) + *(p2+i);
    }
    f=fopen("cong_mt.c","w");
    fprintf(f,"mat1:\n");
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            fprintf(f,"%d ",*(p1+(i*m+j)));
        }
        fprintf(f,"\n");
    }
    fprintf(f,"mat2:\n");
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            fprintf(f,"%d ",*(p2+(i*m+j)));
        }
        fprintf(f,"\n");
    }
    fprintf(f,"mat1+mat2:\n");
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            fprintf(f,"%d ",*(p3+(i*m+j)));
        }
        fprintf(f,"\n");
    }
    fclose(f);
    return 0;
}