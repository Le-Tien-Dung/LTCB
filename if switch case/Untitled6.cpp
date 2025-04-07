#include<stdio.h>
#include<math.h>
int main() {
	float a, b, c, d, e, f, x, y, D, Dx, Dy;
	printf("nhap so a:");
	scanf("%f", &a);
	printf("nhap so b:");
	scanf("%f", &b);
	printf("nhap so c:");
	scanf("%f", &c);
	printf("nhap so d:");
	scanf("%f", &d);
	printf("nhap so e:");
	scanf("%f", &e);
	printf("nhap so f:");
	scanf("%f", &f);
	
	D = a*e - d*b;
	Dx = c*e - f*b;
	Dy = a*f - d*c;
	
	if (D==0) {
		if (Dx+Dy == 0){
			printf("phuong trinh vo so nghiem");
		}
		else {
			printf("phuong trinh vo nghiem");
		}
	}
	else {
		x = Dx/D;
		y = Dy/D;
		printf("phuong trinh co cap nghiem (%f,%f)", x, y);
	}
	
}
