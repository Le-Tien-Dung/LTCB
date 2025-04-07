#include <stdio.h>
void thmot(){
       int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
       printf("Mang mot la:\n");
       for (int i=0;i<3;i++){
           for( int j=0;j<3;j++){
               printf("%d ", a[i][j]);
           }
           printf("\n");
       }
   }
void thhai(){
    int a[3][3];
    printf("Moi ban nhap ham\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Mang hai la \n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
   thmot();
   thhai();
    return 0;
}
