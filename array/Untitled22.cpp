#include<stdio.h>
void nhapham(float a[],int* n){
    printf("nhap kich thuoc mang ");
    scanf("%d", n);
    printf("nhap mang ");
    for (int i =0;i<*n;i++)
    {
        scanf("%f", &a[i]);
    }
}
int main () {
	int n;
	float a[1000];
	nhapham(a,&n);
	float b=a[0], d=a[0];
	int c, e;
	for (int i= 1;i<n;i++){
		if (b<a[i]){
			b=a[i];
			c=i;
		}
	}
	for(int i= 0;i<n;i++){
		if (d>a[i]){
			d=a[i];
			e=i;
		}
	}
	printf("so lon nhat la %f va co vi tri thu %d \n",b,c+1);
	printf("so nho nhat la %f va co vi tri thu %d \n",d,e+1);
	return 0;
}
