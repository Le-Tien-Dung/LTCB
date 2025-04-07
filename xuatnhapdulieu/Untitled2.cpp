#include<stdio.h>
int main() {
	int dd, mm, yyyy;
	printf ("nhap ngay:");
	scanf( "%d", &dd);
	printf ("nhap thang:");
	scanf( "%d", &mm);
	printf ("nhap nam:");
	scanf( "%d", &yyyy);
	
	printf("hom nay la ngay %d/%d/%d", dd, mm, yyyy);
}
