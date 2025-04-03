#include <stdio.h>
int main(){
    int m1,n1,m2,n2,*p1,*p2;
    FILE *f;
    printf("tinh tich 2 ma tran:\nso hang mat1: ");
    scanf("%d",&m1);
    printf("so cot mat1: ");
    scanf("%d",&n1);
    printf("so hang mat2: ");
    scanf("%d",&m2);
    printf("so cot mat2: ");
    scanf("%d",&n2);
    f=fopen("tich_mt.c","w");
    if (n1!=m2){
        printf("khong co mat1*mat2");
        return 0;
    }
    int m=m1,n=m2,p=n2;
    fprintf(f,"m = %d\n",m1);
    fprintf(f,"n = %d\n",m2);
    fprintf(f,"p = %d\n",n2);
    int mat1[m][n],mat2[n][p],result[m][p];
    p1=(int*)mat1;
    p2=(int*)mat2;
    fprintf(f,"mat1:\n");
    printf("mat1:\n");
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            printf("phan tu [%d][%d]: ",i,j);
            scanf("%d",(p1+(i*n+j)));
            fprintf(f,"%-3d",*(p1+(i*n+j)));
        } 
        fprintf(f,"\n");
    }
    fprintf(f,"mat2:\n");
    printf("mat2:\n");
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<p ; j++){
            printf("phan tu [%d][%d]: ",i,j);
            scanf("%d",(p2+(i*p+j)));
            fprintf(f,"%-3d",*(p2+(i*p+j)));
        } 
        fprintf(f,"\n");
    }
    fprintf(f,"mat1*mat2:\n");
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<p ; j++){
            result[i][j]=0;
            for (int k=0 ; k<n ; k++){
                result[i][j] += *(p1+(i*n+k))*(*(p2+(k*p+j)));
            }
            fprintf(f,"%-3d",result[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);
    return 0;
}