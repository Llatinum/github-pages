#include <stdio.h>
int main(){
    int a=5,b=6;
    int *pa=&a;
    int temp=*pa;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}