#include <stdio.h>
void chuyendoi(int *a, int *b){
    int x = *a;
    *a= *b;
    *b= x;
}
int main()
{
    int n;
    printf("Moi ban nhap kich thuoc mang ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Moi ban nhap so thu %d ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int x=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                x=j;
            }
        }
        chuyendoi(&a[i],&a[x]);
    }
    printf("day so sau khi sap xep la " );
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
