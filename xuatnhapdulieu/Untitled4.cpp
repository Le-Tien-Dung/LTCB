#include<stdio.h>
#include<math.h>
int main() {
	float pi=3.14, R;
	printf("nhap ban kinh:");
	scanf("%f", &R);
	float S,V;
	S= 4*pi*R*R;
	V= (1.33)*pi*R*R*R ;
	printf("dien tich hcau la:%f, the tich hinh cau la:%f", S, V);
}
