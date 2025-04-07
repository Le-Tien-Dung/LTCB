#include <stdio.h>
void chuyendoi(int* a, int* b){
    int x = *a; 
	*a= *b;
    *b= x;
}
int main()
{
    int a; int b;
    printf("Moi ban nhap so a ");
    scanf("%d", &a);
    printf("Moi ban nhap so b ");
    scanf("%d", &b);
    chuyendoi(&a,&b);
    printf("hoan doi xong ta co a=%d b=%d",a,b);
    

    return 0;
}
