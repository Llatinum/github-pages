#include <stdio.h>
int main(){
    int mang[10]={1,2,3,4,5,6,7,8,9,0};
    for (int i=10 ; i>=1 ; i--){
        printf("%d ",mang[i-1]);
    }
    return 0;
}
