#include<stdio.h>
int main (){
	float n,i,P=1;
	printf("nhap so giai thua  ");
	scanf("%f",&n);
	
	for (i=n;i>0;--i) {
		P*=i;
	}
	printf("%f giai thua la %f", n,P);
}
