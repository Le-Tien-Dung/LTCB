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
	float x, a[1000];
	int z=0,n;
	nhapham(a,&n);
	printf("nhap so x ");
    scanf("%f", &x);
	for (int i=0;i<n;i++){
		if (x==a[i]){
			z+=1;
		}
	}
	printf("x xuat hien %d lan",z);
}
