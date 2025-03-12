#include <stdio.h>
int main(){
    int c[11]={1,4,1,4,4,4,7,4,8,9,9},count=0,x;
    printf("nhap x: ");
    scanf("%d",&x);
    for (int i=0 ; i<=10 ; i++){
        if (x==c[i]){
            count++;
        }
    }
    printf("co %d so %d",count,x);
    return 0;
}