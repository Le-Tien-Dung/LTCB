#include <stdio.h>
int main()
{
    int n;
    printf("Moi ban nhap kich thuoc mang ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Moi ban nhap so thu %d ",i+1);
        scanf("%d",&a[i]);
    }
    int y=a[0], x=a[0];
    for(int i=1;i<n;i++) {
    	if (a[i]>x) {
    		x=a[i];
		}
	}
	for(int i=1;i<n;i++) {
    	if (a[i]<y) {
    		y=a[i];
		}
	}
	printf("so lon nhat la %d, so nho nhat la %d", x,y);
	return 0;
}
