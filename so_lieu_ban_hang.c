#include <stdio.h>
#include <string.h>
#define max 10
struct mathang {
    char name[20];
    int number,value,totalprice;
};
void swap(struct mathang *a,struct mathang *b){
    struct mathang temp=*b;
    *b=*a;
    *a=temp;
}
void sort(int n,struct mathang h[]){
    for(int j=0 ; j<n-1 ; j++){
        for (int i=0 ; i<n-j-1 ; i++){
            if (strcmp(h[i].name,h[i+1].name)>0){
                swap(&h[i],&h[i+1]);
            }   
        }
    }
}
int main(){
    struct mathang h[max];
    int n,sum=0;
    printf("n mat hang: ");
    scanf("%d",&n);
    getchar();
    for (int i=0 ; i<n ; i++){
        printf("STT %d\n",i+1);
        printf("Ten hang: ");
        fgets(h[i].name,20,stdin);
        h[i].name[strcspn(h[i].name,"\n")]=0;
        printf("Don gia: ");
        scanf("%d",&h[i].value);
        printf("So luong: ");
        scanf("%d",&h[i].number);
        getchar();
        h[i].totalprice=h[i].number*h[i].value;
    }
    sort(n,h);
    printf("%-5s %-15s %-10s %-10s %-10s","STT","Ten hang","Don gia","So luong","Thanh tien");
    for (int i=0 ; i<n ; i++){
        printf("\n%-5d %-15s %-10d %-10d %-10d",i+1,h[i].name,h[i].value,h[i].number,h[i].totalprice);
        sum += h[i].totalprice;
    }
    printf("\n%-5s %-15s %-10s %-10s %-10d\n"," "," "," ","Tong tien",sum);
    return 0;
}