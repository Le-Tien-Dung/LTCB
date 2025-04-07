#include<stdio.h>
int main () {
	int a,i, S=0;
	for(i=1;i<=10;i++) {
		int a[i];
		printf("a%d = ", i);
        scanf("%d", &a[i]);
        
        S+=a[i];
	}
	printf("tong cac so vua nhap la:%d",S);
}
