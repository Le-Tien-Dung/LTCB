#include<stdio.h>
int main () {
	int a, i;
	printf("nhap so a:");
	scanf("%d",&a);
	
	for (i=2; a>i ; i++) {
		if (a%i ==0) {
			printf("%d khong la so nguyen to", a);
			
		} 
		else { printf ("%d la so nguyen to", a);
		}
		break;
	}
}
