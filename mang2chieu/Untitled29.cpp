#include <stdio.h>

int main()
{
    int m;
    int n;
    printf("Nhap kich thuoc hai ma tran \n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Moi ban nhap ma tran 1\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Moi ban nhap ma tran 2\n");
    int b[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("tong 2 ma tran la \n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++) {
        	printf(" %d ",c[i][j]);
		}
		printf("\n");
}
}
