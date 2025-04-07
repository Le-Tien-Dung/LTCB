#include<stdio.h>
#include<math.h>
int main() {
	float a,b,c,V,S, q;
	printf("nhap so a:");
	scanf("%f", &a);
	printf("nhap so b:");
	scanf("%f", &b);
	printf("nhap so c:");
	scanf("%f", &c);
	
	if (a+b>c and a+c>b and c+b>a){
		V = a+b+c;
		if (a*a + b*b == c*c or a*a + c*c == b*b or a*a == b*b + c*c) {
			if (a==b or a==c or b==c){
				printf("la tam giac vuong can");
			}
			else{
			printf ("la tam giac vuong");
		}
	}
	else if (a==b or a==c or b==c) {
		if (a=b=c){
			printf("la tam giac deu");}
			else{
		printf("la tam giac can");
	}
	}
	else {
	printf("la tam giac thuong");
}
V = a+b+c;
q=V/2;
S = sqrt(q*(q-a)*(q-b)*(q-c));
printf("dien tich tam giac la %.1f, chu vi tam giac la %f", S, V);
}
else {printf("khong la tam giac");
}
}
