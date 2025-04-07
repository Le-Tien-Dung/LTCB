#include<stdio.h>
#include<math.h>
int main () {
	int a,b,i;
	printf("nhap so thu 1:");
	scanf("%d", &a);
	printf("nhap so thu 2:");
	scanf("%d", &b);
	
	for(i=a; i > 0; --i) {
		if (a%i==0 && b%i==0) {
				printf ("uoc chung lon nhat la %d \n",i);
				break;
		}
	} 
	for(i=a;i>=a;i++) {
		if(i%a==0 and i%b==0) {
			printf ("boi chung nho nhat la %d",i);
			break;
		}
	}
}
