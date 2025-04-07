#include<stdio.h>
int main (){
	int a,i;
	printf("nhap so a:");
	scanf("%d",&a);
	
	for (i=1;i<=a;i++) {
		if (a%i==0){
			printf ("uoc cua %d la %d. \n",a,i);
		}
	}
}
