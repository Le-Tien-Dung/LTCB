#include<stdio.h>
int main () {
	float n,i,S=0;
	printf("nhap so phan tu  ");
	scanf("%f",&n);
	for (i=1; i<=n; i++ ){
			S+=(1/i);
		}
	printf("tong cua day la %f", S);
}
