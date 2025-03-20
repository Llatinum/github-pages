#include <stdio.h>
int main(){
    int n,num=1,i=0,j=-1,round=1,end,lside=0;
    printf("nhap n: ");
    scanf("%d",&n);
    int arr[n][n],size=n;
    if (n%2==0){
        end=n/2;
    }
    else{
        end=n/2+1;
    }
    while (round<=end){
        while (j<size-1){
            j++;
            arr[i][j]=num;
            num++;
        }
        while (i<size-1){
            i++;
            arr[i][j]=num;
            num++;
        }
        while (j>lside){
            j--;
            arr[i][j]=num;
            num++;
        }
        while (i>lside+1){
            i--;
            arr[i][j]=num;
            num++;
        }
        round++;
        size--;
        lside++;
    }
    for (i=0 ; i<n ; i++){
        for (j=0 ; j<n ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}