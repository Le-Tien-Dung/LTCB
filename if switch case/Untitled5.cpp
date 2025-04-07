#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c, x1, x2 ;
	printf("nhap so a:");
	scanf("%lf", &a);
	printf("nhap so b:");
	scanf("%lf", &b);
	printf("nhap so c:");
	scanf("%lf", &c);
	
	double delta ;
	delta = b*b - 4*a*c;
	
	if (delta > 0) {
		x1 = (-b+(sqrt(delta)))/(2*a);
		x2 = (-b-(sqrt(delta)))/(2*a);
		printf("phuong trinh co 2 nghiem phan biet: %lf,  %lf", x1, x2);
	}
	else if (delta == 0) {
		x1 = x2 = -b/(2*a);
		printf("phuong trinh co nghiem kep: %lf", x1);
	}
	else {
		printf("phuong trinh vo nghiem");
	}
}
