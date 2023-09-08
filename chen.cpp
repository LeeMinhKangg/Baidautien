#include "stdio.h"
#include "conio.h"

void printmang(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
}

void chen(int a[], int &n){
    int k,x,i;
    printf("Nhap vao x: "); scanf("%d",&x);
    for(i=0; i<n; i++){
        if(x<a[i]){
            k=i;
            break;
        }
    }
    printf("%d",k);
    printf("\n");
    n++;
    for(i=n-1; i>k; i--)
        a[i]=a[i-1];
    a[k] = x;
}

int main(){
	int a[100], n;
    printf("Nhap vao so luong phan tu cua mang: "); scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Mang vua nhap la: ");
    printmang(a, n);
    
    printf("\nMang sau khi chen phan tu la:");
    chen(a,n);
    printmang(a,n);
    
    return 0;
}
