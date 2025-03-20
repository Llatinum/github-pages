#include <stdio.h>
void swap(int *a, int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
int pivotspot(int arr[],int first,int last){
    int pivot=arr[last],p=first;
    for (int i=first ; i<last ; i++){
        if (arr[i]<pivot){
            swap(&arr[i],&arr[p]);
            p++;
        }
    }
    swap(&arr[last],&arr[p]);
    return p;
}
void sort(int arr[],int first,int last){
    if (last>first){
        int pspot=pivotspot(arr,first,last);
        sort(arr,pspot+1,last);
        sort(arr,first,pspot-1);
    }
}
int main(){
    int arr[10]={2,3,8,1,4,6,9,7,5,0};
    int n=sizeof(arr) / sizeof(arr[0]);
    sort(arr,0,n-1);
    for (int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}