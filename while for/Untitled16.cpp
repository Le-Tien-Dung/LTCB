#include<stdio.h>
int main () {
	int a,i,S=0;
	printf("nhap so a ");
	scanf("%d",&a);
	
	for (i=1; i<=a; i++ ){
		if (a%i==0){
			S+=i;
		}
	}
	if (S==2*a){
		printf ("%d la so hoan hao",a);
			}
			else { printf ("%d khong la so hoan hao",a);
			}
}
