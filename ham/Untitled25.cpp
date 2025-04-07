#include <stdio.h>
void luythua(int a, int b){
    long x=1;
    for (int i=1;i<=b;i++){
        x*=a;
    }
    
    
}
int main()
{ int a;
int b;
long x;
printf("nhap co so ");
scanf("%d",&a);
printf("nhap so mu ");
scanf("%d",&b);
x=luythua(a,b);
printf("luy thua la %ld",x);
    return 0;
}
