#include <stdio.h>
int main(){
    int sum=0,i=1;
    for (i=1 ; i<=100 ; i++){
        if (i%2!=0){
        sum += i;
        }
    }
    printf("tong cac so le tu 1-100 = %d",sum);
    return 0;
}