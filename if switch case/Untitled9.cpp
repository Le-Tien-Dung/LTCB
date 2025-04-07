#include<stdio.h>
int main  () {
	int DTB;
	printf("nhap diem TB:");
	scanf("%d", &DTB);
	
	if (DTB < 5){
		printf("xep loai yeu");
	}
	else if (5<= DTB and DTB<7){
		printf("xep loai TB");
	}
	else if (7<= DTB and DTB<8){
		printf("xep loai kha");
	}
	else if (8<= DTB and DTB<9){
		printf("xep loai gioi");
	}
	else 
		printf("xep loai xuat sac");
	
}
