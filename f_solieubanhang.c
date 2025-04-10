#include <stdio.h>
#include <string.h>
#define max 15
struct hang{
    char name[20];
    int price,num;
};
int main(){
    struct hang h[max];
    int n,sum=0;
    printf("n mat hang: ");
    scanf("%d",&n);
    getchar();
    for (int i=0 ; i<n ; i++){
        printf("ten mat hang %d: ",i+1);
        fgets(h[i].name,20,stdin);
        h[i].name[strcspn(h[i].name,"\n")]=0;
        printf("don gia: ");
        scanf("%d",&h[i].price);
        printf("so luong: ");
        scanf("%d",&h[i].num);
        getchar();
    }
    FILE *f;
    f=fopen("so_lieu.c","wb");
    fprintf(f,"SO LIEU BAN HANG\n%-4s %-20s %-10s %-10s %-10s\n","STT","Ten hang","Don gia","So luong","Thanh tien");
    for (int i=0 ; i<n ; i++){
        fprintf(f,"%-4d %-20s %-10d %-10d %-10d\n",i+1,h[i].name,h[i].price,h[i].num,(h[i].price)*(h[i].num));
        sum += h[i].price*h[i].num;
    }
    fprintf(f,"%-36s %-10s %-10d"," ","Tong tien",sum);
    fclose(f);
}