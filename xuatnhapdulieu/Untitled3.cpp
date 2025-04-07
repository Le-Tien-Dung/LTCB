#include<stdio.h>
#include<math.h>
int main() {
	int a, b;
	printf("nhap so a:");
	scanf("%d", &a);
	printf("nhap so b:");
	scanf("%d", &b);
    int tong, hieu, tich, thuong;
    tong=a+b;
    hieu=a-b;
    tich=a*b;
    thuong=a/b;
	printf("tong hieu tich thuong cua a va b lan luot la %d, %d, %d, %d",tong,hieu,tich,thuong);
}
