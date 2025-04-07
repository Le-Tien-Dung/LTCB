#include<stdio.h>
void nhapham(float a[],int* n){
    printf("nhap kich thuoc mang ");
    scanf("%d", n);
    printf("nhap mang ");
    for (int i =0;i<*n;i++)
    {
        scanf("%f", &a[i]);
    }
}
int main() {
	int n;
	float a[1000];
	nhapham(a,&n);
	for(int i=0;i<n;i++){
		if(a[i]<0){
			a[i]=0;
		}
	}
	for(int i=0;i<n;i++){
		printf("mang sau khi thay la ");
		printf("%d",a[i]);
	}
}
