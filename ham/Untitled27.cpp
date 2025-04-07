#include <stdio.h>
long long fibo(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
    return 1;    
    }
    
    return fibo(n-1)+fibo(n-2);
}

int main()
{ int n;
printf("Moi ban nhap so ");
scanf("%d",&n);
printf("So fibonacci thu %d la %lld",n,fibo(n));
    

    return 0;
}
