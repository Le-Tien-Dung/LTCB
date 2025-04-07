#include <stdio.h>
int main()
{
    int a[10];
    for(int i=0;i<10;i++){
        printf("Moi ban nhap so thu %d ",i+1);
        scanf("%d",&a[i]);
    }
    int *b = a;
    printf("Day so la ");
    for(int i=0;i<10;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
