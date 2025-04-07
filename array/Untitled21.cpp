#include <stdio.h>
void nhapham(int a[],int* n){
    printf("nhap kich thuoc mang ");
    scanf("%d", n);
    printf("nhap mang ");
    for (int i =0;i<*n;i++)
    {
        scanf("%d", &a[i]);
    }
}
int main()
{
    int n;
    int a[1000];
    int sumtatca=0,sumsoduong=0,sumsoam=0;
    float tbctatca=0.0,tbcsoduong=0.0,tbcsoam=0.0;
    float b=0.0,c=0.0,d=0.0;
    nhapham(a,&n);
     
    for (int i =0;i<n;i++)
    {
    sumtatca+=a[i];
    }
    for (int i =0;i<n;i++){
        if (a[i]>=0){
            sumsoduong+=a[i];
            
        }
        else{
                sumsoam+=a[i];
            }
        }
    for (int i =0;i<n;i++){
            tbctatca+=a[i];
            b+=1;
    }
    for (int i =0;i<n;i++){
        if(a[i]>=0){
            tbcsoduong+=a[i];
            c+=1;
        }
        else{
            tbcsoam+=a[i];
            d+=1;
            
        }
    }
    printf ("tong tat ca cac so trong mang la %d\n", sumtatca);
    printf ("tong tat ca cac so duong trong mang la %d\n", sumsoduong);
    printf ("tong tat ca cac so am trong mang la %d\n", sumsoam);
    printf ("tbc tat ca cac so trong mang la %f\n", tbctatca/b);
    if(c!=0){
         printf ("tbc tat ca cac so duong trong mang la %f\n", tbcsoduong/c);
    }
    else{
        printf("mang ko co gia tri duong");
    }
    if(d!=0){
         printf ("tbc tat ca cac so am trong mang la %f", tbcsoam/d);
    }
    else{
        printf("mang ko co gia tri am");
    }
    
    
    return 0;
}
